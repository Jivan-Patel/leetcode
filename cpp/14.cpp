#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution1 {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string longestPrefix = strs[0];
        for(string word: strs) {
            string currentPrefix;
            int j = 0;
            while(j < word.size() && word[j] ==  longestPrefix[j]) {
                currentPrefix += word[j];
                j++;
            }
            if(longestPrefix.size() > currentPrefix.size()) {
                longestPrefix = currentPrefix;
            }
            if(longestPrefix == "") return longestPrefix;
        }
        return longestPrefix;
    }
};

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int longestPrefix = strs[0].size();
        int i = 1;
        while (i < strs.size() && longestPrefix > 0) {
            int currentPrefix = 0;
            int j = 0;
            while (j < longestPrefix && strs[i][j] == strs[i - 1][j]) {
                currentPrefix++;
                j++;
            }
            longestPrefix = min(longestPrefix, currentPrefix);
            i++;
        }
        string res;
        for (int i = 0; i < longestPrefix; i++) {
            res += strs[0][i];
        }
        return res;
    }
};


int main() {

    Solution solution;
    vector <string> v1 = {"flower","flow","flight"};
    cout << solution.longestCommonPrefix(v1) << endl;

    return 0;
}