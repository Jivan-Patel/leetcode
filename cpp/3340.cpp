#include <iostream>
using namespace std;

bool isBalanced(string num) {
    int evenSum = 0, oddSum = 0;
    for(int i = 0; i < num.size(); i++) {
        int n = num[i] - 48;
        if(i % 2 == 0){
            evenSum += n;
        }
        else {
            oddSum += n;
        }
    }
    return evenSum == oddSum;
}

int main() {
    
    cout << isBalanced("1234") << endl;
    cout << isBalanced("24123") << endl;

    return 0;
}