class Solution {
public:
    int search(vector<int>& nums, int target){
        int low = 0,high=nums.size()-1;
        while(low<=high){
            int mid = low + (high-low)/2;
            if(nums[mid]>=target) high = mid - 1;
            else low = mid + 1;
        }
        return low;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> res;
        if ((int)nums.size() == 0) return {-1,-1};
        int a = search(nums,target);
        int b = search(nums,target+1) - 1;
        if(nums[a]!=target) return {-1,-1};
        res.push_back(a);
        res.push_back(b);
        return res;
    }
};