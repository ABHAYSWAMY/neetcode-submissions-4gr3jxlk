class Solution {
public:
    bool backtrack(int index,int& target,vector<int>& bucket,vector<int>& nums){
        if(index==nums.size()) return true;
        for(int i=0;i<bucket.size();i++){
            if((bucket[i]+nums[index])>target) continue;
            bucket[i] += nums[index];
            if(backtrack(index+1,target,bucket,nums)) return true;
            bucket[i] -= nums[index];
            if(bucket[i]==0) break; //we dont want same duplicate states
        }
        return false;
    }

    bool canPartitionKSubsets(vector<int>& nums, int k) {
        int sum = accumulate(nums.begin(),nums.end(),0);
        if(sum%k!=0) return false;
        int target = sum/k;
        sort(nums.rbegin(),nums.rend());
        if(nums[0]>target) return false;
        vector<int> bucket(k,0);
        bool ans = backtrack(0,target,bucket,nums);
        return ans;
    }
};