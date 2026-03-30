#include <iostream>
using namespace std;

class Solution {
public:
    int firstMatchingIndex(string s) {
        int n = s.size();
        for(int i = 0; i < n; i++) {
            if(s[i] == s[n - i - 1]) {
                return i;
            }
        }
        return -1;
    }
};

int main() {

    Solution solution;

    cout << solution.firstMatchingIndex("abcacbd") << endl;
    cout << solution.firstMatchingIndex("abc") << endl;
    cout << solution.firstMatchingIndex("abcdab") << endl;

    return 0;
}