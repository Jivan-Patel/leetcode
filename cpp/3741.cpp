#include <iostream>
#include <vector>
#include <unordered_map>
#include <deque>
using namespace std;

class Solution {
public:
    int minimumDistance(vector<int>& nums) {
        unordered_map<int, deque<int>> idx;
        int minDistance = INT_MAX;
        for(int i = 0; i < nums.size(); i++) {
            idx[nums[i]].push_back(i);
            if (idx[nums[i]].size() > 3) {
                idx[nums[i]].pop_front();
            }
            if(idx[nums[i]].size() == 3) {
                minDistance = min(minDistance, 2 * (idx[nums[i]].back() - idx[nums[i]].front()));
            }
        }
        return (minDistance < INT_MAX) ? minDistance : -1;
    }
};

int main() {

    Solution solution;
    vector<int> v1 = {1,2,1,1,3};
    vector<int> v2 = {1,1,2,3,2,1,2};
    cout << solution.minimumDistance(v1) << endl;
    cout << solution.minimumDistance(v2) << endl;

    return 0;
}