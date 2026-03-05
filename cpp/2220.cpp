#include <iostream>
using namespace std;

int minBitFlips(int start, int goal) {
    string binaryStart = "";
    while(start > 0) {
        if(start % 2)
            binaryStart += '1';
        else 
            binaryStart += '0';
        start /= 2;
    }
    string binaryGoal = "";
    while(goal > 0) {
        if(goal % 2)
            binaryGoal += '1';
        else 
            binaryGoal += '0';
        goal /= 2;
    }

    while(binaryGoal.size() > binaryStart.size()) {
        binaryStart += '0';
    }
    while(binaryGoal.size() < binaryStart.size()) {
        binaryGoal += '0';
    }
    int i = binaryStart.size() - 1;
    int flipCount = 0;
    while(i >= 0) {
        if(binaryStart[i] != binaryGoal[i])
            flipCount++;
        i--;
    }
    return flipCount;
}


int main() {
    
    cout << minBitFlips(10,7) << endl;
    cout << minBitFlips(3,4) << endl;
    return 0;
}