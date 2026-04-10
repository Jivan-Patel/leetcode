#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int i = 0, j = 0;
        int n = nums.size();
        vector<int> res;
        while (i < n && j < n) {
            while (i < n && nums[i] < 0) i++;
            while (j < n && nums[j] > 0) j++;
            res.push_back(nums[i++]);
            res.push_back(nums[j++]);
        }
        return res;
    }
};

int main() {

    Solution solution;
    vector <int> v1 = {3,1,-2,-5,2,-4};
    solution.rearrangeArray(v1);

    return 0;
}