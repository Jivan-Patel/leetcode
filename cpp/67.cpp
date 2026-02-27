#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

string addBinary(string a, string b) {
    string res = "";
    int i = a.size() - 1;
    int j = b.size() - 1;
    int carry = 0;

    while (i >= 0 || j >= 0 || carry) {
        int sum = carry;

        if (i >= 0) {
            sum += a[i] - '0';
            i--;
        }
        if (j >= 0) {
            sum += b[j] - '0';
            j--;
        }
        res += (sum % 2) + '0';
        carry = sum / 2;
    }
    reverse(res.begin(), res.end());
    return res;
}

int main () { 
    cout << addBinary("11", "1") << endl;
    cout << addBinary("1010", "1011") << endl; // "10101"
    return 0; 
}