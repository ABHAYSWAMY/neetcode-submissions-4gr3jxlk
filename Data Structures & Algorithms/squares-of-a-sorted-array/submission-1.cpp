class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> res;
        int i=0;
        while(nums[i]<0) i++;
        i--;
        int j=i+1;
        while(i>=0 && j<nums.size()){
            if(abs(nums[i])<=abs(nums[j])) res.push_back(nums[i]*nums[i--]);
            else res.push_back(nums[j]*nums[j++]);
        }
        while(i>=0) res.push_back(nums[i]*nums[i--]);
        while(j<nums.size()) res.push_back(nums[j]*nums[j++]);
        return res;
    }
};