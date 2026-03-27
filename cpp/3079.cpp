#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int encrypt(int num) {
        int digit = 0;
        int maxD = 0;
        int res = 0;
        while (num > 0) {
            maxD = max(maxD, num % 10);
            digit++;
            num /= 10;
        }
        for (int i = 0; i < digit; i++) {
            res = res * 10 + maxD;
        }
        return res;
    }
    int sumOfEncryptedInt(vector<int>& nums) {
        int result = 0;
        for (int num : nums) {
            result += encrypt(num);
        }
        return result;
    }
};

int main() {

    Solution solution;

    cout << solution.sumOfEncryptedInt() << endl;

    return 0;
}