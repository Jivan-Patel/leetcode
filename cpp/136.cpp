#include <iostream>
#include <vector>
using namespace std;

int singleNumber(vector<int>& nums) {
    int sum = 0;
    for(int num : nums) {
        sum ^= num;
    }
    return sum;
}


int main() {
    vector<int> v1 = {2,2,1};
    vector<int> v2 = {4,1,2,1,2};
    cout << singleNumber(v1) << endl;
    cout << singleNumber(v2) << endl;
    return 0;
}