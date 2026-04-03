class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        unordered_map<int,int> res;
        int count=0;
        for(int i=0;i<nums.size();i++){
            if(res.count(nums[i])) count+=res[nums[i]];
            res[nums[i]]++;
        }
        return count;

    }
};