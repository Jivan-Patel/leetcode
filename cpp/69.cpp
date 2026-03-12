#include <iostream>
using namespace std;

int mySqrt(int x) {
    int i = 0;
    int j = x;
    while(i <= j) {
        int mid = (i + j) / 2;
        if(mid * mid < x) {
            i = mid + 1;
            if(i * i > x) 
                return mid;
        } 
        else if(mid * mid > x) {
            j = mid - 1;
            if(j * j < x) 
                return j;
        }
        else {
            return mid;
        }
    }
    return 0;
}

int main() {

    cout << mySqrt(4) << endl;
    cout << mySqrt(8) << endl;
    cout << mySqrt(0) << endl;
    cout << mySqrt(1) << endl;
    

    return 0;
}