class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int> m;
        for(int i=0;i<nums.size();i++){
            m[nums[i]]++;
        }
        int a = nums.size()/2;
        for(int i=0;i<=a;i++){
            if(m[nums[i]]>=a) return nums[i];
        }
    }
};