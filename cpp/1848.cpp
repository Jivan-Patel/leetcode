#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int getMinDistance(vector<int>& nums, int target, int start) {
        int minDis = nums.size();
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == target && minDis > abs(i - start))
                minDis = abs(i - start);
        }
        return minDis;
    }
};

int main() {

    Solution solution;
    vector <int> v1 = {1,2,3,4,5};
    cout << solution.getMinDistance(v1, 5, 3) << endl;

    return 0;
}