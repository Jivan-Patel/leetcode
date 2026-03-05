#include <iostream>
using namespace std;

int rangeBitwiseAnd(int left, int right) {
    int flag = 0;
    while(left != right) {
        left >>= 1;
        right >>= 1;
        flag++;
    }
    return left << flag;
}

int main() {
    
    cout << rangeBitwiseAnd(5,7) << endl;
    cout << rangeBitwiseAnd(0,0) << endl;
    cout << rangeBitwiseAnd(1,2147483647) << endl;
    cout << rangeBitwiseAnd(1073741832,2147483647) << endl;

    return 0;
}