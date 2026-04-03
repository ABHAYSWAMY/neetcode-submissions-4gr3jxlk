class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        int rows = grid.size();
        if (rows == 0) return 0;
        int cols = grid[0].size();

        int peri = 0;

        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                if (grid[i][j] == 1) {
                    // up
                    if (i == 0 || grid[i-1][j] == 0) peri++;
                    // down
                    if (i == rows-1 || grid[i+1][j] == 0) peri++;
                    // left
                    if (j == 0 || grid[i][j-1] == 0) peri++;
                    // right
                    if (j == cols-1 || grid[i][j+1] == 0) peri++;
                }
            }
        }
        return peri;
    }
};
