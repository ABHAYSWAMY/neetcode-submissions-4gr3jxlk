class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int low=1;
        int high=1;
        int lt=1;
        int ht=1;
        for(int i=1;i<nums.size();i++){
            if(nums[i]>nums[i-1]){
                ht++;
                high = high>ht?high:ht;
                lt=1;
            }
            if(nums[i]<nums[i-1]){
                lt++;
                low = low>lt?low:lt;
                ht=1;
            }
            if(nums[i]==nums[i-1]){
                lt=1;
                ht=1;
            }
        }
        int n = high>low?high:low;
        return n;
    }
};