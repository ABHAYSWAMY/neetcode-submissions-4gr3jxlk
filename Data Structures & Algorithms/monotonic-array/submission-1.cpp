class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        if(nums.size()==1) return true;
        bool up = true;
        bool down = true;
        for(int i=1;i<nums.size();i++){
            if(nums[i-1]<nums[i]) down=false;
            if(nums[i-1]>nums[i]) up=false;
        }
        if(down||up) return true;
        return false;
    }
};