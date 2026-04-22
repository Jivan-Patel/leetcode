#include <iostream>
using namespace std;

class Solution {
public:
    int myAtoi(string s) {
        long int res = 0;
        int i = 0;
        while (i < s.size() && s[i] == ' ') i++;
        int isNegative;
        if(s[i] == '+') {
            i++;
            if(s[i] < '0' || s[i] > '9') return 0;
        }
        if (s[i] != '-') isNegative = 1;
        else {
            isNegative = -1;
            i++;
        }
        while (i < s.size()) {
            if (s[i] >= '0' && s[i] <= '9') {
                if(res * 10 + s[i] - '0' > INT_MAX) {
                    return (isNegative == 1) ? INT_MAX : INT_MAX * isNegative - 1 ;
                }
                res = res * 10 + s[i] - '0';
            }
            else break;
            i++;
        }
        return res * isNegative;
    }
};


int main() {

    Solution solution;

    // cout << solution.myAtoi("42") << endl;
    // cout << solution.myAtoi("-548e8") << endl;
    cout << solution.myAtoi("   -42") << endl;

    return 0;
}