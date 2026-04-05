class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int left=0,count=0,maxx=0,right;
        for(right=0;right<nums.size();right++){
            if(nums[right]==0) count++;
            while(count>k){
                if(nums[left]==0) count--;
                left++;
            }
            maxx = max(maxx, right-left+1);
        }
        return maxx;
    }
};