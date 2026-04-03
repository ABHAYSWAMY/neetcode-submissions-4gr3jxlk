class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        if (n==0) return 0;
        vector<int> prefix(n);
        vector<int> suffix(n);
        int leftmax=0;
        int rightmax=0;
        for(int i=0;i<n;i++){
            prefix[i] = leftmax;
           leftmax = max(leftmax,height[i]);
        }
        for(int i=n-1;i>=0;i--){
            suffix[i] = rightmax;
           rightmax = max(rightmax,height[i]);
        }
        int water=0;
        for(int i=0;i<n;i++){
           int res=min(prefix[i],suffix[i])-height[i];
           if(res>=0) water+=res;
        }
        return water;
    }
};
