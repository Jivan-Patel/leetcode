#include <iostream>
using namespace std;

class Solution {
public:
    int strStr(string haystack, string needle) {
        int j = 0;
        int i = 0;
        while(i < haystack.size()) {
            if(haystack[i] == needle[j]) {
                j++;
                i++;
            }
            else {
                i = i - j + 1;
                j = 0;
            }
            if(j == needle.size()) return i - j + 1;
        }
        return -1;
    }
};

int main() {

    Solution solution;

    cout << solution.strStr("sadbutsad", "sad") << endl;

    return 0;
}