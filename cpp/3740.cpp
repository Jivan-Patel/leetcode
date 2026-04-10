#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int minimumDistance(vector<int>& nums) {
        int minDistance = INT_MAX;
        int len = nums.size();
        for (int i = 0; i < len - 2; i++) {
            for (int j = i + 1; j < len - 1; j++) {
                if(nums[i] != nums[j]) continue;
                for (int k = j + 1; k < len; k++) {
                    if (nums[i] == nums[k]) {
                        minDistance = min(minDistance, 2 * (k-i));
                    }
                }
            }
        }
        return (minDistance < INT_MAX) ? minDistance : -1;
    }
};

int main() {

    Solution solution;
    vector<int> v1 = {1,2,1,1,3};
    cout << solution.minimumDistance(v1) << endl;

    return 0;
}