class Solution {
public:
    bool pairagatte(vector<int>& nums,int mid,int p){
        int count = 0;
        for(int i=1;i<nums.size();i++){
            if(nums[i]-nums[i-1]<=mid){
                count++;
                i++;
            }
        }
        if(count>=p) return true;
        else return false;
    }

    int minimizeMax(vector<int>& nums, int p) {
        if(nums.size()==1) return 0;
        sort(nums.begin(),nums.end());
        int n = nums.size();
        int low = 0;
        int high = nums[n-1] - nums[0];
        int ans = high;
        while(low<=high){
            int mid = low + (high-low)/2;
            bool valid = pairagatte(nums,mid,p);
            if(valid){
                ans = mid;
                high = mid - 1;
            }
            else low = mid + 1;
        }
        return ans;
    }
};