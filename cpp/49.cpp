#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <algorithm>
using namespace std;

class Solution {
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

int main() {

    Solution solution;
    
    vector <string> v1 = {"eat","tea","tan","ate","nat","bat"};

    solution.groupAnagrams(v1);

    return 0;
}