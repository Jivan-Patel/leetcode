#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int evenCount = 0;
        for (int num : nums) {
            int digit = 0;
            while (num > 0) {
                num /= 10;
                digit++;
            }
            if (digit % 2 == 0)
                evenCount++;
        }
        return evenCount;
    }
};

int main() {

    Solution solution;
    vector<int> v1 = {12, 345, 2, 6, 7896};
    vector<int> v2 = {555, 901, 482, 1771};

    cout << solution.findNumbers(v1) << endl;
    cout << solution.findNumbers(v2) << endl;

    return 0;
}