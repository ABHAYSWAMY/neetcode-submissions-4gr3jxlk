class Solution {
private:
    vector<vector<char>> grid1;
    int rows,cols;
    int count=0;
    vector<vector<bool>> visited;

    void dfs(int i, int j){
        if(i<0 || j<0 || i>=rows || j>=cols || grid1[i][j]=='0') return;
        if(visited[i][j]) return;
        visited[i][j] = true;
        dfs(i+1,j);
        dfs(i-1,j);
        dfs(i,j+1);
        dfs(i,j-1);
    }
public:
    int numIslands(vector<vector<char>>& grid) {
        grid1=grid;
        rows = grid.size();
        cols = grid[0].size();
        visited = vector<vector<bool>>(rows,vector<bool>(cols,false));
        for(int i=0;i<rows;i++){
            for(int j=0;j<cols;j++){
                if(grid[i][j]=='1' && visited[i][j]==false){
                    dfs(i,j);
                    count++;
                }
            }
        }
        return count;
        
    }
};
