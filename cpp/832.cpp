#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        for (int i = 0; i < image.size(); i++) {
            int left = 0;
            int right = image[i].size() - 1;
            while (left <= right) {
                int temp = image[i][left] == 0 ? 1 : 0;
                image[i][left] = image[i][right] == 0 ? 1 : 0;
                image[i][right] = temp;
                left++;
                right--;
            }
        }
        return image;
    }
};

int main() {
    
    Solution solution;
    
    vector<vector<int>> v1 = {{1,1,0},{1,0,1},{0,0,0}};
    vector<vector<int>> v2 = {{1,1,0,0},{1,0,0,1},{0,1,1,1},{1,0,1,0}};


    solution.flipAndInvertImage(v1);
    solution.flipAndInvertImage(v2);

    return 0;
}