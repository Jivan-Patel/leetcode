#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>

using namespace std;

class Solution1 {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char, vector<int>> freq1;
        unordered_map<char, vector<int>> freq2;
        int minI = s.size();
        for (int i = 0; i < s.size(); i++) {
            freq1[s[i]].push_back(i);
            freq2[t[i]].push_back(i);
        }
        for (int i = 0; i < s.size(); i++) {
            bool areEqual = (freq1[s[i]].size() == freq2[t[i]].size()) &&
                            equal(freq1[s[i]].begin(), freq1[s[i]].end(), freq2[t[i]].begin());
            if (!areEqual)
                return false;
        }
        return true;
    }
};

class Solution2 {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char, vector<int>> freq1;
        unordered_map<char, vector<int>> freq2;
        int minI = s.size();
        for (int i = 0; i < s.size(); i++) {
            if(freq1[s[i]].size() > 0 && freq2[t[i]].size() > 0) {
                freq1[s[i]].push_back(i);
                freq2[t[i]].push_back(i);
                bool areEqual = (freq1[s[i]].size() == freq2[t[i]].size()) && equal(freq1[s[i]].begin(), freq1[s[i]].end(), freq2[t[i]].begin());
                if (!areEqual) return false;
            }
            else if(freq1[s[i]].size() > 0 || freq2[t[i]].size() > 0) return false;
            else {
                freq1[s[i]].push_back(i);
                freq2[t[i]].push_back(i);
            }
        }
        return true;
    }
};

class Solution3 {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char, char> check1;
        unordered_map<char, char> check2;
        int minI = s.size();
        for (int i = 0; i < s.size(); i++) {
            if (check1[s[i]] && check1[s[i]] != t[i] || check2[t[i]] && check2[t[i]] != s[i]) {
                return false;
            }
            else {
                check1[s[i]] = t[i];
                check2[t[i]] = s[i];
            }
        }
        return true;
    }
};

class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char, char> check1;
        unordered_set<char> check2;
        int minI = s.size();
        for (int i = 0; i < s.size(); i++) {
            if ((check1[s[i]] && check1[s[i]] != t[i]) || (!check1[s[i]] && check2.count(t[i]))) {
                return false;
            }
            else {
                check1[s[i]] = t[i];
                check2.insert(t[i]);
            }
        }
        return true;
    }
};

int main() {

    Solution solution;

    cout << solution.isIsomorphic("badc", "baba") << endl;

    return 0;
}