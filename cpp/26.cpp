#include <iostream>
#include <vector>
using namespace std;

class Solution1 {
public:
    int removeDuplicates(vector<int>& nums) {
        if (nums.size() > 1 && nums[0] == nums[1]) nums.erase(nums.begin());
        int i = 1;
        while (i < nums.size()) {
            if (nums[i] == nums[i - 1]) {
                nums.erase(nums.begin() + i);
            }
            else i++;
        }
        return nums.size();
    }
};

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i = 0;
        for (int j = 1; j < nums.size(); j++) {
            if (nums[i] != nums[j]) {
                nums[++i] = nums[j];
            }
        }
        return i + 1;
    }
};

int main() {

    Solution solution;
    vector<int> v1 = {1,1,2};

    cout << solution.removeDuplicates(v1) << endl;

    return 0;
}