#include <iostream>
using namespace std;

int numberOfMatches(int n) {
    int matches = 0;
    while (n > 1) {
        matches += n / 2;
        n = (n % 2 == 0) ? n / 2 : (n / 2) + 1;
    }
    return matches;
}

int main () {
    cout << numberOfMatches(7) << endl;
    cout << numberOfMatches(14) << endl;
    cout << numberOfMatches(200) << endl;
    cout << numberOfMatches(1) << endl;
    return 0;
}