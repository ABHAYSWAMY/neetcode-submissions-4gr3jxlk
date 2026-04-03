class Solution {
public:
    int maxArea(vector<int>& heights) {
        int i=0,j=heights.size()-1,res=0;
        while(i<j){
            int small = heights[i]>heights[j] ? heights[j] : heights[i];
            int ans = abs(j-i)*small;
            res = max(res,ans);
            if(heights[j]>heights[i]) i++;
            else j--;
        }
        return res;
    }
};
