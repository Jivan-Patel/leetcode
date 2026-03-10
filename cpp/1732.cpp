#include <iostream>
using namespace std;

int largestAltitude(vector<int>& gain) {
    int sum = 0;
    int max = 0;
    for(int point : gain) {
        sum += point;
        if(sum > max) 
            max = sum;
    }
    return max;
}

int main() {
    

    return 0;
}