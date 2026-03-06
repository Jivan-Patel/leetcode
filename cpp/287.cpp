#include <iostream>
#include <vector>
#include <set>
using namespace std;

int findDuplicate(vector<int>& nums) {
    set<int> unique;
    for(int i = 0; i < nums.size(); i++) {
        if(unique.count(nums[i]))
            return nums[i];
        unique.insert(nums[i]);
    }
    return 0;
}

int main() {
    
    
    return 0;
}