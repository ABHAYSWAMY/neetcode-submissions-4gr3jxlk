class Solution {
    vector<vector<int>> grid1;
    int rows,cols;
    int max_area=0;
    vector<vector<bool>> visited;
    int dfs(int i, int j){
        if(i<0 || j<0 || i>=rows || j>=cols || grid1[i][j]==0) return 0;
        if(visited[i][j]) return 0;
        visited[i][j]=true;
        return 1+dfs(i-1,j)+dfs(i+1,j)+dfs(i,j+1)+dfs(i,j-1);
    }
public:
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        grid1=grid;
        rows = grid.size();
        cols = grid[0].size();
        visited = vector<vector<bool>>(rows, vector<bool>(cols,false));
        for(int i=0; i<rows;i++){
            for(int j=0;j<cols;j++){
                if(grid1[i][j]==1 && visited[i][j]==false){
                    int area = dfs(i,j);
                    max_area = area>max_area ? area : max_area;
                }
            }
        }
    return max_area;
    }
};
