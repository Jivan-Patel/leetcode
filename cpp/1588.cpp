#include <iostream>
#include <vector>
using namespace std;

int sumOddLengthSubarrays(vector<int>& arr) {
    int sum = 0;
    int currentLen = 1;
    while (arr.size() >= currentLen) {
        for (int i = 0; i <= arr.size() - currentLen; i++) {
            for (int j = i; j < i + currentLen; j++) {
                sum = sum + arr[j];
            }
        }
        currentLen += 2;
    }
    return sum;
}

int main () { 
    vector<int> v = {1,4,2,5,3};
    cout << sumOddLengthSubarrays(v);
    return 0; 
}