#include <iostream>
using namespace std;

class Solution {
public:
    int furthestDistanceFromOrigin(string moves) {
        int x = 0, dash = 0;
        for(char ch: moves) {
            if(ch == 'L') x++;
            else if(ch == 'R') x--;
            else dash++;
        }
        return abs(x) + dash;
    }
};

int main() {

    Solution solution;

    cout << solution.furthestDistanceFromOrigin("L_RL__R") << endl;
    cout << solution.furthestDistanceFromOrigin("_R__LL_") << endl;

    return 0;
}