#include <iostream>
using namespace std;

class Solution {
public:
    string trafficSignal(int timer) {
        if (timer == 0) return "Green";
        else if (timer == 30) return "Orange";
        else if (30 < timer && timer <= 90) return "Red";
        return "Invalid";
    }
};

int main() {

    Solution solution;

    cout << solution.trafficSignal(0) << endl;
    cout << solution.trafficSignal(30) << endl;
    cout << solution.trafficSignal(70) << endl;
    cout << solution.trafficSignal(95) << endl;

    return 0;
}