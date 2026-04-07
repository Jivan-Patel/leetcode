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

int main() {

    Solution solution;

    cout << solution.majorityElement() << endl;

    return 0;
}