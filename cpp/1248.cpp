#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        int count = 0;
        for(int i = 0; i < nums.size(); i++) {
            int currentOdd = 0;
            for(int j = i; j < nums.size(); j++) {
                if(nums[j]%2==1) {
                    currentOdd++;
                }
                if(currentOdd == k) {
                    count++;        
                }
                if(currentOdd > k) {
                    break;     
                }
            }
        }
        return count;
    }
};

int main() {

    Solution solution;

    vector<int> v1 = {1,1,2,1,1};
    vector<int> v2 = {2,4,6};
    vector<int> v3 = {2,2,2,1,2,2,1,2,2,2};

    cout << solution.numberOfSubarrays(v1, 3) << endl;
    cout << solution.numberOfSubarrays(v2, 1) << endl;
    cout << solution.numberOfSubarrays(v3, 2) << endl;

    return 0;
}