class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        vector<int> left_sum(nums.size(),0);
        vector<int> right_sum(nums.size(),0);
        for(int i=0;i<nums.size();i++){
            left_sum[i] = i==0 ? 0 : nums[i-1]+left_sum[i-1];
        }
        for(int i=nums.size()-1;i>=0;i--){
            right_sum[i] = i==nums.size()-1 ? 0 : nums[i+1]+right_sum[i+1];
        }
        for(int i=0;i<nums.size();i++){
            if(left_sum[i]==right_sum[i]) return i;
        }
        return -1;
    }
};