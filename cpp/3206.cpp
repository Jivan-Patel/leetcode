#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int numberOfAlternatingGroups(vector<int>& colors) {
        int altCount = 0;
        int len = colors.size();
        for(int i = 1; i < len - 1; i++) {
            if(colors[i-1] != colors[i] && colors[i+1] != colors[i]) altCount++;
        }
        if(colors[0] != colors[len-1]) {
            if(colors[0] != colors[1]) altCount++;
            if(colors[len-1] != colors[len-2]) altCount++;
        }
        return altCount;
    }
};

int main() {

    Solution solution;
    vector <int> v1 = {1,1,1};
    vector <int> v2 = {0,1,0,0,1};
    cout << solution.numberOfAlternatingGroups(v1) << endl;
    cout << solution.numberOfAlternatingGroups(v2) << endl;

    return 0;
}