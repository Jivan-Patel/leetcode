#include <iostream>
using namespace std;

class Solution1 {
public:
    void moveZeroes(vector<int>& nums) {
        int i = 0;
        int j = nums.size() - 1;
        while(i < j) {
            if(nums[i] == 0) {
                nums.erase(nums.begin() + i);
                nums.push_back(0);
                j--;
            }
            else i++;
        }
    }
};

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int j = 0;
        for(int i = 0; i < nums.size(); i++) {
            if(nums[i] != 0){
                nums[j] = nums[i];
                j++;
            }
        }
        for(int i = j; i < nums.size(); i++) {
            nums[i] = 0;
        }
    }
};

int main() {

    Solution solution;

    cout << solution.moveZeroes() << endl;

    return 0;
}