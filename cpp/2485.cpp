#include <iostream>
using namespace std;

int pivotInteger(int n) {
    int left = 1;
    int right = n * (n + 1) / 2;
    int i = 1;
    while (left < right) {
        right -= i;
        i++;
        left += i;
    }
    if (left == right)
        return i;
    return -1;
}

int main() {
    cout << pivotInteger(8) << endl;
    cout << pivotInteger(1) << endl;
    cout << pivotInteger(4) << endl;

    return 0;
}