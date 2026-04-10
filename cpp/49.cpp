#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <algorithm>
#include <unordered_map>
using namespace std;

class Solution1 {
private:
    string sortStr(string str) {
        sort(str.begin(), str.end());
        return str;
    }
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> res;
        map<string, vector<string>> anagram;
        for (string str : strs) {
            string sortedStr = sortStr(str);
            anagram[sortedStr].push_back(str);
        }
        for (auto& [key, value] : anagram) {
            res.push_back(value);
        }
        return res;
    }
};

class Solution2 {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> res;
        unordered_map<string, vector<string>> anagram;
        for (string str : strs) {
            string sortedStr = str;
            sort(sortedStr.begin(), sortedStr.end());            
            anagram[sortedStr].push_back(str);
        }
        for (auto& [key, value] : anagram) {
            res.push_back(value);
        }
        return res;
    }
};

class Solution {        // best
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> res;
        unordered_map<string, vector<int>> anagram;
        for (int i = 0; i < strs.size(); i++) {
            string sortedStr = strs[i];
            sort(sortedStr.begin(), sortedStr.end());            
            anagram[sortedStr].push_back(i);
        }
        for (auto& [key, idx] : anagram) {
            int lastI = res.size();
            res.push_back({});
            for(int i : idx) {
                res[lastI].push_back(strs[i]);
            }
        }
        return res;
    }
};

class Solution2 {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> res;
        map<map<char, int>, vector<int>> anagram;
        for (int i = 0; i < strs.size(); i++) {
            map<char, int> letterCount;
            for(char ch: strs[i]) {
                letterCount[ch]++;
            }
            anagram[letterCount].push_back(i);
        }
        for (auto& [key, idx] : anagram) {
            int lastI = res.size();
            res.push_back({});
            for(int i : idx) {
                res[lastI].push_back(strs[i]);
            }
        }
        return res;
    }
};

int main() {

    Solution solution;
    
    vector <string> v1 = {"eat","tea","tan","ate","nat","bat"};

    solution.groupAnagrams(v1);

    return 0;
}