#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int sum = 0;
        for(int i = 0; i < mat.size(); i++) {
            for(int j = 0; j < mat[i].size(); j++) {
                if(i == j || i+j == mat[i].size() - 1) {
                    sum += mat[i][j];
                }
            }
        }
        return sum;
    }
};

int main() {

    Solution solution;

    vector <vector <int>> v1 = {{1,2,3},{4,5,6},{7,8,9}};
    cout << solution.diagonalSum(v1) << endl;

    return 0;
}