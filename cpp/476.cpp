#include <iostream>
using namespace std;

int findComplement(int num) {
    string binary = "";
    int result = 0;
    while (num > 0) {
        binary += num % 2 ? '0' : '1';
        num /= 2;
    }
    int power = 1;
    for (char ch : binary) {
        if (ch == '1') {
            result += power;
        }
        power *= 2;
    }
    return result;
}
    
int main() {
    
    cout << findComplement(5) << endl;
    cout << findComplement(7) << endl;
    cout << findComplement(10) << endl;

    return 0;
}