#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int absDifference(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        int maxSum = 0, minSum = 0;
        int lastI = nums.size() - 1;
        for(int i = 0; i < k; i++) {
            minSum += nums[i];
            maxSum += nums[lastI - i];
        }
        return abs(minSum - maxSum);
    }
};

int main() {

    Solution solution;
    vector v1 = {1, 0, 0, 2, 0, 1};
    vector v2 = {1, 0, 1, 0};

    cout << solution.absDifference(v1,2) << endl;
    cout << solution.absDifference(v2,3) << endl;

    return 0;
}