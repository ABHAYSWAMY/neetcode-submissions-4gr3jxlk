class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int left=0,res=100001,right=0;
        long long sum=0;
        while(right<nums.size()){
            sum+=nums[right];
            if(sum>=target){
                while(sum>=target){
                    res = min(res,right-left+1);
                    sum-=nums[left];
                    left++;
                }
            }
            right++;
        }
        if(res==100001) return 0;
        else return res;
    }
};