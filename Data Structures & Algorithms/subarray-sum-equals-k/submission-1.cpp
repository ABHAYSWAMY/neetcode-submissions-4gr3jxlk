class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int count=0;
        unordered_map<int,int> freq;
        freq[0]=1;
        int sum = 0;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            if(freq.count(sum-k)) count+=freq[sum-k];
            freq[sum]++;
        }
        return count;
    }
};