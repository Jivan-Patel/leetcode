#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

class Solution {
public:
    bool checkStrings(string s1, string s2) {
        for (int i = 0; i < s1.size(); i++) {
            if (s1[i] == s2[i])
                continue;
            int j = i + 2;
            while (j < s1.size()) {
                if (s1[j] == s2[i]) {
                    char temp = s1[i];
                    s1[i] = s1[j];
                    s1[j] = temp;
                    break;
                }
                j += 2;
            }
            if (s1[i] != s2[i])
                return false;
        }
        return s1 == s2;
    }
};

int main() {

    Solution solution;

    cout << solution.checkStrings("abcdba", "cabdab") << endl;  // 1
    cout << solution.checkStrings("abe", "bea") << endl;        // 0

    return 0;
}