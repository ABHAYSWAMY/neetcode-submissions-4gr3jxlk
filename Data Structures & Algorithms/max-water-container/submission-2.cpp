class Solution {
public:
    int maxArea(vector<int>& heights) {
        int maxx = 0;
        int i = 0;
        int j = heights.size()-1;
        while(i<j){
            int small = min(heights[i],heights[j]);
            int res = abs(j-i)*small;
            maxx = max(maxx,res);
            if (heights[i]<heights[j]) i++;
            else j--;
        } return maxx;
    }
};
