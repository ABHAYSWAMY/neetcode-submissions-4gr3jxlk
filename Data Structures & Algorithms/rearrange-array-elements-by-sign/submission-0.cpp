class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> res;
        int i=0,j=0;
        while(i<nums.size() && j<nums.size()){
            while(i<nums.size() && nums[i]<0) i++;
            res.push_back(nums[i++]);
            while(j<nums.size() && nums[j]>0) j++;
            res.push_back(nums[j++]);
        }
        return res;
    }
};