#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Solution {
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

int main() {

    Solution solution;

    cout << solution.reverseWords("the sky is blue") << endl;
    cout << solution.reverseWords("  hello world  ") << endl;
    cout << solution.reverseWords("a good   example") << endl;

    return 0;
}