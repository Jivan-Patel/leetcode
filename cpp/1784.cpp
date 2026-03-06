#include <iostream>
using namespace std;

bool checkOnesSegment(string s) {
    int i = s.size() - 1;
    bool flag = false;
    while(i > 0) {
        if(!flag && s[i] == '1')
            flag = true;
        if(flag && s[i] == '0')
            return false;
        i--;
    }
    return true;
}

int main() {

    cout << checkOnesSegment("1001") << endl;
    cout << checkOnesSegment("110") << endl;
    cout << checkOnesSegment("111111111000000") << endl;

    return 0;
}