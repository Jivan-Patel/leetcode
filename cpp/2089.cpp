#include <iostream>
#include <vector>
#include <set>
using namespace std;

class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        multiset<int> sort;
        vector<int> index;
        int i = 0;
        for (int num : nums) {
            sort.insert(num);
        }
        for (int num : sort) {
            if (num == target)
                index.push_back(i);
            i++;
        }
        return index;
    }
};

int main() {

    Solution solution;

    vector<int> v = {1,2,5,2,3};

    solution.targetIndices(v,2);
    solution.targetIndices(v,3);
    solution.targetIndices(v,5);

    return 0;
}