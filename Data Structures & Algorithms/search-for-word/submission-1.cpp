class Solution {
public:
    bool dfs_bt(int r,int c,int index,string& word,vector<vector<bool>>& vis,vector<vector<char>>& board){
            if(index==word.size()) return true;
            int row = board.size();
            int col = board[0].size();
            if(r<0 || c<0 || r>=row || c>=col) return false;
            if(vis[r][c]) return false;
            if(board[r][c]!=word[index]) return false;
            vis[r][c] = true;
            bool ans = (dfs_bt(r+1,c,index+1,word,vis,board)
            || dfs_bt(r-1,c,index+1,word,vis,board)
            || dfs_bt(r,c+1,index+1,word,vis,board)
            || dfs_bt(r,c-1,index+1,word,vis,board)          
            );
            vis[r][c] = false;
            return ans;
    }

    bool exist(vector<vector<char>>& board, string word) {
        int rows = board.size();
        int cols = board[0].size();
        vector<vector<bool>>vis (rows,vector<bool>(cols,false));
        for(int i=0;i<rows;i++){
            for(int j=0;j<cols;j++){
                if(dfs_bt(i,j,0,word,vis,board)) return true;
            }
        }
        return false;
    }
};
