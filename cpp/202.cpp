#include<iostream>
using namespace std;

bool isHappy(int n) {
    int temp = n;
    while (temp != 4) {
        int sum = 0;
        while (temp != 0) {
            sum += (temp % 10) * (temp % 10);
            temp = temp / 10;
        }
        if (sum == 1)
            return true;
        temp = sum;
    }
    return false;
}