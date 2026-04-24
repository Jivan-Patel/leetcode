#include <iostream>
using namespace std;

class Solution1 {
public:
    bool isPalindrome(string s) {
        string ns;
        for(char ch : s) {
            if((ch >= 'a' && ch <= 'z') || (ch >= '0' && ch <= '9')) ns += ch;
            else if(ch >= 'A' && ch <= 'Z') ns += (ch + 'a' - 'A');
        }
        int i = 0, j = ns.size() - 1;
        while(i < j) {
            if(ns[i] != ns[j]) return false;            
            i++;
            j--;
        }
        return true;
    }
};

class Solution {
public:
    bool isPalindrome(string s) {
        int i = 0, j = s.size() - 1;
        while(i < j) {
            while(i < j && (s[i] < 'a' || s[i] > 'z') && (s[i] < 'A' || s[i] > 'Z') && (s[i] < '0' || s[i] > '9')) i++;
            while(i < j && (s[j] < 'a' || s[j] > 'z') && (s[j] < 'A' || s[j] > 'Z') && (s[j] < '0' || s[j] > '9')) j--;
            if(i > j) break;
            if(tolower(s[i]) != tolower(s[j])) return false;    
            i++;
            j--;
        }
        return true;
    }
};

int main() {

    Solution solution;

    cout << solution.isPalindrome("A man, a plan, a canal: Panama") << endl;
    cout << solution.isPalindrome("race a car") << endl;
    cout << solution.isPalindrome(" ") << endl;
    cout << solution.isPalindrome("0P") << endl;

    return 0;
}