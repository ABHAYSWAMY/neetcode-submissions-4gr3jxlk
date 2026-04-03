class Solution {
private:
    vector<vector<int>> grid1;
    vector<vector<bool>> vis;
    int rows,cols;

    int dfs(int i, int j) {
    if (i < 0 || j < 0 || i > rows-1 || j > cols-1 || grid1[i][j]==0) return 1;
    if (vis[i][j]) return 0;
    vis[i][j] = true;
    return dfs(i, j+1) + dfs(i, j-1) + dfs(i-1, j) + dfs(i+1, j);
}

public:
    int islandPerimeter(vector<vector<int>>& grid) {
        grid1 = grid;
        rows = grid.size();
        cols = grid[0].size();
        vis = vector<vector<bool>>(rows, vector<bool>(cols, false));

        for(int i=0; i<rows; i++){
            for(int j=0; j<cols; j++){
                if(grid[i][j]==1) return dfs(i,j);
            }
        }   return 0;   
    }
};