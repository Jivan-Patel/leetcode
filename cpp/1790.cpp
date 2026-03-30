#include <iostream>
using namespace std;

class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {
        bool isSwaped = false;
        for(int i = 0; i < s1.size(); i++) {
            if(s1[i] != s2[i]) {
                if(isSwaped) {
                    return false;
                }
                for(int j = i+1; j < s1.size(); j++) {
                    if(s1[j] == s2[i] && s2[j] == s1[i]) {
                        isSwaped = true;
                        swap(s1[i],s1[j]);
                    }
                }
                if(!isSwaped) {
                    return false;
                }
            }
        }
        return true;
    }
};

int main() {

    Solution solution;

    cout << solution.areAlmostEqual("bank", "kanb") << endl;
    cout << solution.areAlmostEqual("attack", "defend") << endl;
    cout << solution.areAlmostEqual("kelb", "kelb") << endl;

    return 0;
}