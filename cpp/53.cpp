#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n = nums.size();
        int maxSubSum = nums[0];
        int currentSum = 0;
        for (int i = 0; i < n; i++) {
            currentSum += nums[i];
            maxSubSum = max(currentSum, maxSubSum);
            if (currentSum < 0) {
                currentSum = 0;
            }
        }
        return maxSubSum;
    }
};

int main() {

    Solution solution;

    vector <int> v1 = { -2,1,-3,4,-1,2,1,-5,4 };
    vector <int> v2 = { 1 };
    vector <int> v3 = { 5,4,-1,7,8 };

    cout << solution.maxSubArray(v1) << endl;
    cout << solution.maxSubArray(v2) << endl;
    cout << solution.maxSubArray(v3) << endl;

    return 0;
}