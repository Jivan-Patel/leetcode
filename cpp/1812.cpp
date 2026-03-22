#include <iostream>
using namespace std;

class Solution {
public:
    bool squareIsWhite(string coordinates) {
        return (coordinates[0] + coordinates[1]) % 2;
    }
};

int main() {

    Solution solution;

    cout << solution.squareIsWhite("a1") << endl;
    cout << solution.squareIsWhite("h3") << endl;
    cout << solution.squareIsWhite("c7") << endl;

    return 0;
}