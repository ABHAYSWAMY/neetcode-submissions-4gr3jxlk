class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int,int> value_index;
        for(int i = 0; i<nums.size(); i++){
            if(value_index.find(nums[i]) != value_index.end()){
                if(i - value_index[nums[i]] <= k) return true;
            } value_index[nums[i]] = i;
        } return false;
        }
    };    
