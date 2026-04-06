class Solution {
public:
    int atmostk(vector<int>& nums,int k){
        if(k<=0) return 0;
        unordered_map<int,int> freq;
        int left=0,right,count=0;
        for(right=0;right<nums.size();right++){
            freq[nums[right]]++;
            while(freq.size()>k){
                freq[nums[left]]--;
                if(freq[nums[left]]==0) freq.erase(nums[left]);
                left++;
            }
            count += right-left+1;
        }
        return count;
    }

    int subarraysWithKDistinct(vector<int>& nums, int k) {
        int n = atmostk(nums,k) - atmostk(nums,k-1);
        return n;
    }
};