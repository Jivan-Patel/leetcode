#include <iostream>
using namespace std;

int trailingZeroes(int n) {
    int count = 0;
    for (int i = 1; i <= n; i++) {
        int n = i;
        while(n > 0 && n % 5 == 0) {
            count++;
            n /= 5;
        }
    }
    return count;
}
    
int main() {
    
    cout << trailingZeroes(1) << endl;
    cout << trailingZeroes(25) << endl;
    cout << trailingZeroes(1000) << endl;

    // cout << Power(5) << endl;
    // cout << Power(25) << endl;
    // cout << Power(100) << endl;

    return 0;
}