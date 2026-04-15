class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int low = 0;
        int rows = matrix.size();
        int colums = matrix[0].size();
        int high = (rows*colums)-1;
        while(low<=high){
            int mid = low + (high-low)/2;
            int r = mid/colums;
            int c = mid%colums;
            if(matrix[r][c]==target) return true;
            else if(matrix[r][c]>target) high = mid - 1;
            else low = mid + 1;
        }
        return false;
    }
};
