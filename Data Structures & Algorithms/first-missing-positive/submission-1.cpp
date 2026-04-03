class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        unordered_set<int> st;
        for(int i=0;i<nums.size();i++) if(nums[i]>=0) st.insert(nums[i]);
        double n = 10e10;
        for(int i=1;i<n;i++) if(!st.count(i)) return i;
        return -1;
    }
};