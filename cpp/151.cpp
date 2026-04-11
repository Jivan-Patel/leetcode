#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Solution1 {
public:
    string reverseWords(string s) {
        string res = "";
        int i = s.size() - 1;
        while (i >= 0) {
            int j = i;
            while (j >= 0 && s[j] != ' ')
                j--;
            j++;
            if(res[0] && res.back() != ' ') res += ' ';
            for (int k = j; k <= i; k++) {
                res += s[k];
            }
            i = j - 1;
            while (i >= 0 && s[i] == ' ') i--;
        }
        return res;
    }
};

class Solution {
public:
    string reverseWords(string s) {
        string temp = "";
        vector<string> wordStore;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] != ' ') temp += s[i];
            else if (!temp.empty()) {
                wordStore.push_back(temp);
                temp = "";
            }
        }
        if (!temp.empty()) {
            wordStore.push_back(temp);
        }
        string res;
        for (int i = wordStore.size() - 1; i >= 0; i--) {
            res += wordStore[i];
            if (i > 0) res += ' ';
        }
        return res;
    }
};

int main() {

    Solution solution;

    cout << solution.reverseWords("the sky is blue") << endl;
    cout << solution.reverseWords("  hello world  ") << endl;
    cout << solution.reverseWords("a good   example") << endl;

    return 0;
}