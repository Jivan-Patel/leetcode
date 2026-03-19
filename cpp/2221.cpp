#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int triangularSum(vector<int>& nums) {
        while (nums.size() > 1) {
            vector<int> res;
            for (int i = 0; i < nums.size() - 1; i++) {
                res.push_back((nums[i] + nums[i + 1]) % 10);
            }
            nums = res;
        }
        return nums[0];
    }
};

int main() {

    Solution solution;
    vector<int> v1= {1,2,3,4,5};
    vector<int> v2= {5};
    cout << solution.triangularSum(v1) << endl;
    cout << solution.triangularSum(v2) << endl;

    return 0;
}