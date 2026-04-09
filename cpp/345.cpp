#include <iostream>
#include <vector>
#include <string>
#include <set>
using namespace std;

class Solution {
public:
    string reverseVowels(string s) {
        int i = 0;
        int j = s.size();
        string res;
        set<char> vowel = {'a','e','i','o','u', 'A','E','I','O','U'};
        while(i < s.size()) {
            if(!vowel.count(s[i])) res += s[i]; 
            else {
                j--;
                while(j >= 0 && !vowel.count(s[j])) j--;
                res += (j >= 0) ? s[j] : s[i];
            }
            i++;
        }
        return res;
    }
};

class Solution1 {
public:
    string reverseVowels(string s) {
        int i = 0;
        int j = s.size() - 1;
        set<char> vowel = {'a','e','i','o','u', 'A','E','I','O','U'};
        while(i < j) {
            while(i < j && !vowel.count(s[i])) i++;
            while(i < j && !vowel.count(s[j])) j--;
            swap(s[i], s[j]);
            i++;
            j--;
        }
        return s;
    }
};

int main() {

    Solution solution;

    cout << solution.reverseVowels("IceCreAm") << endl;

    return 0;
}