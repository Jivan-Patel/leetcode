#include <iostream>
using namespace std;

class Solution {
public:
    bool isCircularSentence(string sentence) {
        int len = sentence.size();
        if(sentence[0] != sentence[len-1]) return false;
        int i = 0;
        while(i < len) {
            while(i < len && sentence[i] != ' ') {
                i++;
            }
            if(i+1 < len && sentence[i-1] != sentence[i+1]) return false;
            i++;
        }
        return true;
    }
};

int main() {

    Solution solution;

    cout << solution.isCircularSentence("leetcode exercises sound delightful") << endl;
    cout << solution.isCircularSentence("eetcode") << endl;
    cout << solution.isCircularSentence("Leetcode is cool") << endl;

    return 0;
}