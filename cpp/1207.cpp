#include <iostream>
#include <map>
#include <vector>
using namespace std;

class Solution {
private:
    map<int,int> frequency(vector<int>& nums) {
        map<int, int> freq;
        for(int num: nums) {
            if(freq[num]) {
                freq[num]++;
            }
            else {
                freq[num] = 1;
            }
        }
        return freq;
    }

public:
    bool uniqueOccurrences(vector<int>& arr) {
        map<int,int> freq = frequency(arr);
        map<int,int> freqOfFreq;
        int freqSize = 0;
        for (auto& [num, frequency] : freq) {
            freqSize++;
            if(freqOfFreq[frequency]) {
                return false;
            }
            else {
                freqOfFreq[frequency] = 1;
            }
        }
        return true;
    }
};

int main() {

    Solution solution;

    vector<int> arr1 = {1,2,2,1,1,3};
    vector<int> arr2 = {1,2};
    vector<int> arr3 = {-3,0,1,-3,1,1,1,-3,10,0};


    cout << solution.uniqueOccurrences(arr1) << endl;
    cout << solution.uniqueOccurrences(arr2) << endl;
    cout << solution.uniqueOccurrences(arr3) << endl;

    return 0;
}