#include <iostream>
using namespace std;

class Solution {
public:
    int unequalTriplets(vector<int>& nums) {
        int n = nums.size();
        int count = 0;
        for(int i = 0; i < n - 2; i++) {
            for(int j = i + 1; j < n - 1; j++) {
                if(nums[i] == nums[j]) continue;
                for(int k = j + 1; k < n; k++) {
                    if(nums[i] != nums[k] && nums[j] != nums[k]) count++;
                }
            }
        }
        return count;
    }
};

int main() {

    Solution solution;

    
    cout << solution.unequalTriplets(v1) << endl;

    return 0;
}