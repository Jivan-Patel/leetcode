#include <iostream>
#include <vector>
#include <set>
#include <algorithm>

using namespace std;

vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
    vector <int> res;
    multiset<int> set;
    for(int num: nums) {
        set.insert(num);
    }
    for(int n1: nums) {
        int smallerCount = 0;
        for(int n2: set) {
            if(n1 == n2) break;
            smallerCount++;
        }
        res.push_back(smallerCount);
    }
    return res;
}
    
int main() {
    vector <int> v1 ={8,1,2,2,3};
    smallerNumbersThanCurrent(v1);
    
    return 0;
}