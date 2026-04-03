class Solution {
public:
    int maxArea(vector<int>& heights) {
        int max = 0;
        for(int i=0;i<heights.size();i++){
            for(int j=0;j<heights.size();j++){
                int small;
                if (heights[i]>heights[j]) small = heights[j];
                else small = heights[i];
                int res = (i-j)*small;
                max = (res>max) ? res : max;
            }
        } return max;
    }
};
