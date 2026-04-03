class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        int left=0,right=0;
        unordered_set<int> res;
        for(right=0;right<nums.size();right++){
            if(res.count(nums[right])){
                while(res.count(nums[right])) res.erase(nums[left++]);
                int ans = right - left + 1;
                if(ans<=k) return true;
            }
            res.insert(nums[right]);
        }
        return false;
    }
};