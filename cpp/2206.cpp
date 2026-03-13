#include <iostream>
#include <vector>
#include <map>
using namespace std;

class Solution {
public:
    bool divideArray(vector<int>& nums) {
        if (nums.size() % 2 == 1) {
            return false;
        }
        map<int, int> freq;
        for (int num : nums) {
            freq[num] ? freq[num]++ : freq[num] = 1;
        }
        for (auto& [num, frequency] : freq) {
            if (frequency % 2 == 1)
                return false;
        }
        return true;
    }
};

int main() {

    Solution solution;

    vector<int> v1 = {3,2,3,2,2,2};
    vector<int> v2 = {1,2,3,4};

    cout << solution.divideArray(v1) << endl;
    cout << solution.divideArray(v2) << endl;

    return 0;
}