#include <iostream>
using namespace std;

int integerReplacement(int n) {
    int count = 0;
    while(n > 1) {
        if(n%2==0){
            n /= 2;
        }
        else if((n-1) % 4 == 0) {
            n--;
        }
        else {
            n++;
        }
        count++;
    }
    return count;
}
    
int main() {
    cout << integerReplacement(8) << endl;
    cout << integerReplacement(7) << endl;
    cout << integerReplacement(4) << endl;

    return 0;
}