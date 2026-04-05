class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        if(k==0 || k==1) return 0;
        int left=0,count=0;
        long long res=1;
        for(int right=0;right<nums.size();right++){
            res *= nums[right];
            while(res>=k){
                res /= nums[left++];
            }
            count += right-left+1;
        }
        return count;
    }
};