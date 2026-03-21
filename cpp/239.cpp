#include <iostream>
#include <vector>
#include <algorithm>
#include <deque>
using namespace std;

class Solution {
public:
    // Solution 1 (brute force approach) Time complexity: O(n*k)
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        vector <int> result;
        for(int i = 0 ; i < nums.size() - k; i++) {
            int windowMax = nums[i];
            for(int j = 1; j < k; j++) {
                windowMax = max({nums[i+j],windowMax});
            }
            result.push_back(windowMax);
        }
        return result;
    }
    // Method 2 (deque) Time complexity: O(n) & space complexity: O(n)
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        deque<int> deque;
        for (int i = 0; i < k; i++) {
            while (deque.size() > 0 && nums[deque.back()] <= nums[i]) {
                deque.pop_back();
            }
            deque.push_back(i);
        }
        vector<int> res;
        for (int i = k; i < nums.size(); i++) {
            res.push_back(nums[deque.front()]);
            while (deque.size() > 0 && deque.front() <= i - k) {
                deque.pop_front();
            }
            while (deque.size() > 0 && nums[deque.back()] <= nums[i]) {
                deque.pop_back();
            }
            deque.push_back(i);
        }
        res.push_back(nums[deque.front()]);
        return res;
    }
};

int main() {

    Solution solution;

    vector <int> v1 = {1,3,-1,-3,5,3,6,7};
    solution.maxSlidingWindow(v1, 3);
    // { 3,3,5,5,6,7 }

    return 0;
}