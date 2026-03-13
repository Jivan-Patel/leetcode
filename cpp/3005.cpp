#include <iostream>
#include <vector>
#include <map>
using namespace std;

class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        map<int, int> freq;
        int maxF = 1;
        int maxFreqCount = 0;
        for(int num: nums) {
            if(freq[num]) {
                freq[num]++;
                maxF = max(maxF, freq[num]);
            }
            else {
                freq[num] = 1;
            }
        }
        for (auto& [num, frequency] : freq) 
            if(frequency == maxF) maxFreqCount += frequency;
        
        return maxFreqCount;
        }
};

int main() {
    Solution s;
    vector<int> v1 = {1,2,2,3,1,4};
    vector<int> v2 = {1,2,3,4,5};

    cout << s.maxFrequencyElements(v1) << endl;
    cout << s.maxFrequencyElements(v2) << endl;
    return 0;
}