#include <iostream>
#include <map>
using namespace std;

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int, int> freq;
        for (int num : nums) {
            freq[num]++;
            if (nums.size() / 2 < freq[num]) return num;
        }
        return -1;
    }
};

class Solution1 {
public:
    int majorityElement(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        return nums[nums.size() / 2];
    }
};

int main() {

    Solution solution;

    cout << solution.majorityElement() << endl;

    return 0;
}