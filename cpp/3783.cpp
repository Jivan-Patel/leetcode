#include <iostream>
using namespace std;

int mirrorDistance(int n) {
    int temp = n;
    int rev = 0;
    while(temp > 0){
        rev = (rev*10) + (temp%10);
        temp/=10;
    }
    return rev > n ? rev - n : n - rev;
}

int main () {
    
    cout << mirrorDistance(25) << endl;
    cout << mirrorDistance(10) << endl;
    cout << mirrorDistance(7) << endl;

    return 0;
}