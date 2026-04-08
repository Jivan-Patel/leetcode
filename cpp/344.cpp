#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution1 {
public:
    void reverseString(vector<char>& s) {
        reverse(s.begin(),s.end());
    }
};

class Solution2 {
public:
    void reverseString(vector<char>& s) {
        int i = 0;
        int j = s.size() - 1;
        while(i < j) {
            swap(s[i], s[j]);
            i++;
            j--;
        }
    }
};

class Solution {
public:
    void reverseString(vector<char>& s) {
        int i = 0;
        int j = s.size() - 1;
        while(i < j) {
            s[i] += s[j];
            s[j] = s[i] - s[j];
            s[i] -= s[j]; 
            i++;
            j--;
        }
    }
};

int main() {

    Solution solution;
    vector <char> v1 = {'h','e','l','l','o'};
    solution.reverseString(v1);

    for(char ch: v1) {
        cout << ch << " ";
    }

    return 0;
}