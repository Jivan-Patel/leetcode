#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<string> twoEditWords(vector<string>& queries, vector<string>& dictionary) {
        vector<string> res;
        int len = queries.front().size();
        for (string queWord : queries) {
            for (string dicWord : dictionary) {
                int count = 0;
                for(int i = 0; i < len;i++) {
                    if(queWord[i] != dicWord[i]) count++;
                }
                if(count < 3) {
                    res.push_back(queWord);
                    break;
                }
            }
        }
        return res;
    }
};

int main() {

    Solution solution;

    cout << solution.twoEditWords() << endl;

    return 0;
}