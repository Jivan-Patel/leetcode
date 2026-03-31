#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<string> stringMatching(vector<string>& words) {
        vector<string> res;
        for (int i = 0; i < words.size(); i++) {
            for (int j = 0; j < words.size(); j++) {
                if (i != j && words[j].find(words[i]) != string::npos) {
                    res.push_back(words[i]);
                    break;
                }
            }
        }
        // print the answer (not for leetcode)
        for(string word : res) {
            cout << word << " ";
        }
        cout << endl;
        return res;
    }
};

int main() {

    Solution solution;
    vector <string> v1 = {"mass","as","hero","superhero"};
    vector <string> v2 = {"leetcode","et","code"};
    vector <string> v3 = {"blue","green","bu"};
    solution.stringMatching(v1);
    solution.stringMatching(v2);
    solution.stringMatching(v3);

    return 0;
}