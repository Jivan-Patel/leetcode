#include <iostream>
#include <map>
#include <string>
using namespace std;

class Solution {
public:
    string decodeMessage(string key, string message) {
        map<char,char> decode;
        char alpha = 'a';
        string res;
        for(int ch: key) {
            if(!decode[ch] && ch != ' ') {
                decode[ch] = alpha;
                alpha++;
            }
        }
        decode[' '] = ' ';
        for(char ch: message) {
            res += decode[ch];
        }
        return res;
    }
};

int main() {

    Solution solution;

    cout << solution.decodeMessage("the quick brown fox jumps over the lazy dog", "vkbs bs t suepuv") << endl;

    return 0;
}