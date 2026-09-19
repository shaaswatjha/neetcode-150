// https://leetcode.com/problems/valid-sudoku/

#include <unordered_map>
#include <unordered_set>
#include <vector>

class Solution {
public:
    bool isValidSudoku(std::vector<std::vector<char>>& board) {
        std::unordered_map<int, std::unordered_set<char>> rows;
        std::unordered_map<int, std::unordered_set<char>> cols;
        std::unordered_map<int, std::unordered_set<char>> squares;

        for (int i = 0; i < 9; ++i) {
            for (int j = 0; j < 9; ++j) {
                if (board[i][j] == '.') {
                    continue;
                }

                int square = (i / 3) * 3 + (j / 3);

                if (
                    rows[i].find(board[i][j]) != rows[i].end() ||
                    cols[j].find(board[i][j]) != cols[j].end() ||
                    squares[square].find(board[i][j]) != squares[square].end()
                ) {
                    return false;
                }

                rows[i].insert(board[i][j]);
                cols[j].insert(board[i][j]);
                squares[square].insert(board[i][j]);
            }
        }
        return true;
    }
};
