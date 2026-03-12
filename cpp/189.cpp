#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        k = k % nums.size();
        int l = nums.size();
        vector<int> res;
        for(int i = l - k; i < l; i++) {
            res.push_back(nums[i]);
        }
        for(int i = 0; i < l - k; i++) {
            res.push_back(nums[i]);
        }
        nums = res;
    }
};

int main() {

    Solution s;

    vector<int> v = {1,2,3,4,5,6,7};
    cout << endl;
    s.rotate(v,10);
    for(int n : v) {
        cout << n << " ";
    }

    return 0;
}