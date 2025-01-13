#include "headers.h"

/*
VALID SUDOKU

Determine if a 9 x 9 Sudoku board is valid. Only the filled cells need to be validated according to the following rules:

Each row must contain the digits 1-9 without repetition.
Each column must contain the digits 1-9 without repetition.
Each of the nine 3 x 3 sub-boxes of the grid must contain the digits 1-9 without repetition.

Note:
A Sudoku board (partially filled) could be valid but is not necessarily solvable.
Only the filled cells need to be validated according to the mentioned rules.
*/

class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        unordered_map<char, int> row, col, block;

        for(int i=0; i < board.size(); i++){
            for(int j=0; j < board.size(); j++){

                // check row, col, block
                char val_row = board[i][j];
                char val_col = board[j][i];
                char val_block = board[(i%3)*3+(j/3)][(j%3)+3*(i/3)];

                // check if the value is already in the row, col, block. If not, add it to the map.
                if(val_row != '.'){
                    auto it_row = row.find(val_row);
                    if(it_row != row.end()) return false;
                    row[val_row] = 1;
                } 
                if(val_col != '.'){
                    auto it_col = col.find(val_col);
                    if(it_col != col.end()) return false;
                    col[val_col] = 1;
                }
                if(val_block != '.'){
                    auto it_block = block.find(val_block);
                    if(it_block != block.end()) return false;
                    block[val_block] = 1;
                }
            }
            // clear the maps for the next iteration
            row.clear();
            col.clear();
            block.clear();
        }
        return true;
    }
};