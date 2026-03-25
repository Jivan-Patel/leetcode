#include <iostream>
#include <deque>
using namespace std;

class Solution {
public:
    int countGoodSubstrings(string s) {
        deque <char> dq;
        int count = 0;
        for(int i = 0; i <= s.size() - 3; i++) {
            if (s[i] != s[i+1] && s[i] != s[i+2] && s[i+1] != s[i+2]) {
                count++;
            }
        }
        return count;
    }
};

int main() {

    Solution solution;

    cout << solution.countGoodSubstrings("xyzzaz") << endl;
    cout << solution.countGoodSubstrings("aababcabc") << endl;

    return 0;
}