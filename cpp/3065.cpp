#include <iostream>
using namespace std;

int minOperations(vector<int>& nums, int k) {
    int smallCount = 0;
    for(int num : nums) {
        if(num < k)
            smallCount++;
    }
    return smallCount;
}

int main() {
    

    return 0;
}