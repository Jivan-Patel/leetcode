#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

class Solution1 {
public:
    int firstUniqChar(string s) {
        unordered_map<int, vector<int>> freq;
        int minI = s.size();
        for(int i = 0; i < s.size(); i++) {
            freq[s[i]].push_back(i);
        } 
        for(auto& f: freq){
            if(f.second.size() == 1) minI = min(minI, f.second[0]);
        }
        return minI < s.size() ? minI : -1;
    }
};

class Solution2 {
public:
    int firstUniqChar(string s) {
        unordered_map<char, int> freq;
        for(int i = 0; i < s.size(); i++) {
            freq[s[i]]++;
        } 
        for(int i = 0; i < s.size(); i++) {
            if(freq[s[i]] == 1) return i;
        }
        return -1;
    }
};

class Solution {
public:
    int firstUniqChar(string s) {
        vector<int> freq(26, 0);
        for (int i = 0; i < s.size(); i++) {
            freq[s[i] - 'a']++;
        }
        for (int i = 0; i < s.size(); i++) {
            if (freq[s[i] - 'a'] == 1) return i;
        }
        return -1;
    }
};

int main() {

    Solution solution;

    cout << solution.firstUniqChar("leetcode") << endl;

    return 0;
}