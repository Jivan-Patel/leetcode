#include <iostream>
#include <vector>
using namespace std;

bool isValid(string s) {
    vector<char> stack;
    int i = -1;
    for (char ch : s) {
        if (ch == '(' || ch == '[' || ch == '{') {
            stack.push_back(ch);
            i++;
        } else if (ch == ')') {
            if (i >= 0 && stack[i] == '(') {
                stack.pop_back();
                i--;
            }
            else
                return false;
        } else if (ch == '}') {
            if (i >= 0 && stack[i] == '{') {
                stack.pop_back();
                i--;
            }
            else
                return false;
        } else if (ch == ']') {
            if (i >= 0 && stack[i] == '['){
                stack.pop_back();
                i--;
            }
            else
                return false;
        }
    }
    return i == -1;
}
    
int main() {
    

    return 0;
}