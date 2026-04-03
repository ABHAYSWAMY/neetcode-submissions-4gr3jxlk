class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        int rows[9][9] = {0};
        int column[9][9] = {0};
        int box[9][9] = {0};
        for(int i=0;i<9;i++){
            for(int j=0;j<9;j++){
                char c = board[i][j];
                if(c == '.') continue;
                int  num = c - '1';
                int box_idx = (i/3)*3+(j/3);
                if(rows[i][num] || column[j][num] || box[box_idx][num]) return false;
                rows[i][num]=column[j][num]=box[box_idx][num] = 1;
            }
        } return true;
    }
};
