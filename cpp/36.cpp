#include <iostream>
#include <vector>
#include <set>
using namespace std;

class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        // checking rows
        for (int i = 0; i < 9; i++) {
            set<char> row;
            for (int j = 0; j < 9; j++) {
                if (board[i][j] == '.') {
                    continue;
                }
                if (row.count(board[i][j])) {
                    return false;
                }
                row.insert(board[i][j]);
            }
        }

        // Checking coloums
        for (int i = 0; i < 9; i++) {
            set<char> col;
            for (int j = 0; j < 9; j++) {
                if (board[j][i] == '.') {
                    continue;
                }
                if (col.count(board[j][i])) {
                    return false;
                }
                col.insert(board[j][i]);
            }
        }

        // checking boxes
        int k = 0;
        while (k < 9) {
            int l = 0;
            while (l < 9) {
                set<char> box;
                for (int i = k; i < 3 + k; i++) {
                    for (int j = l; j < 3 + l; j++) {
                        if (board[i][j] == '.') {
                            continue;
                        }
                        if (box.count(board[i][j])) {
                            return false;
                        }
                        box.insert(board[i][j]);
                    }
                }
                l += 3;
            }
            k += 3;
        }
        return true;
    }
};

int main() {

    Solution solution;
    vector <vector <char>> sodoku = {{'.','.','.','7','5','.','.','.','.'}
                                    ,{'6','.','.','1','9','5','.','.','.'}
                                    ,{'.','9','8','.','.','.','.','6','.'}
                                    ,{'8','.','.','.','6','.','.','.','3'}
                                    ,{'4','.','.','8','.','3','.','.','1'}
                                    ,{'7','.','.','.','2','.','.','.','6'}
                                    ,{'.','6','.','.','.','.','2','8','.'}
                                    ,{'.','.','.','4','1','9','.','.','5'}
                                    ,{'.','.','.','.','8','.','.','7','9'}};

    cout << solution.isValidSudoku(sodoku) << endl;

    return 0;
}