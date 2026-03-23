#include <iostream>
#include <algorithm>
using namespace std;

class Solution {
public:
    int generateKey(int num1, int num2, int num3) {
        string res = "";
        while (num1 > 0 && num2 > 0 && num3 > 0) {
            int digit = min({num1 % 10, num2 % 10, num3 % 10});
            char d = digit + '0';
            res += d;
            num1 /= 10;
            num2 /= 10;
            num3 /= 10;
        }
        reverse(res.begin(), res.end());
        return stoi(res);
    }
};


int main() {

    Solution solution;

    cout << solution.generateKey(1,10,1000) << endl;
    cout << solution.generateKey(987,879,798) << endl;
    cout << solution.generateKey(7899,9999,1000) << endl;

    return 0;
}