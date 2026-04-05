#include <iostream>
#include <vector>
#include <deque>
using namespace std;

class Solution {
public:
    int minSubArrayLen1(int target, vector<int>& nums) { // O(n^2)
        int len = nums.size();
        int minLen = len + 1;
        for (int i = 0; i < len; i++) {
            int currentSum = 0;
            int j = i;
            while ( j < len && j - i + 1 < minLen) {
                currentSum += nums[j];
                if (currentSum >= target) {
                    minLen = min(minLen, j - i + 1);
                    break;
                }
                j++;
            }
        }
        return (minLen != len+1) ? minLen : 0;
    }

    int minSubArrayLen(int target, vector<int>& nums) {
        int len = nums.size();
        int minLen = len + 1;
        deque<int> dq;
        int curDqSum = 0;
        for (int i = 0; i < len; i++) {
            dq.push_back(nums[i]);
            curDqSum += nums[i];
            if(curDqSum == target && minLen < dq.size()) {
                minLen = dq.size();
            }
            while(curDqSum > target) {
                curDqSum -= dq.front();
                dq.pop_front();
            }
        }
        return (minLen != len+1) ? minLen : 0;
    }
};

int main() {

    Solution solution;

    vector <int> v1 = {2,3,1,2,4,3};
    vector <int> v2 = {1,4,4};
    vector <int> v3 = {1,1,1,1,1,1,1,1};

    cout << solution.minSubArrayLen(7,v1) << endl;
    cout << solution.minSubArrayLen(4,v2) << endl;
    cout << solution.minSubArrayLen(11,v3) << endl;

    return 0;
}