class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        int rows = grid.size();
        int columns = grid[0].size();
        int peri = 0;
        for(int i = 0; i<rows;i++){
            for(int j=0;j<columns;j++){
                if (grid[i][j]==0) continue;
                peri+=4;
                if(i-1>=0 && grid[i-1][j]==1) peri--;
                if(i+1<rows && grid[i+1][j]==1) peri--;
                if(j-1>=0 && grid[i][j-1]==1) peri--;
                if(j+1<columns && grid[i][j+1]==1) peri--;

            }
        }
        return peri;
    }
};