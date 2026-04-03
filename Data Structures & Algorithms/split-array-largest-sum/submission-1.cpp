class Solution {
public:
    int splitArray(vector<int>& nums, int k) {
        int low=*max_element(nums.begin(),nums.end());
        int high=accumulate(nums.begin(),nums.end(),0);
        int res;
        while(low<=high){
            int mid = (low+high)/2;
            int subarray = subarr(nums,mid);
            if (subarray>k) low=mid+1;
            else{
                res = mid;
                high=mid-1;
            }
        }
        return res;
    }
    int subarr(vector<int>& nums,int mid){
        int currsum = 0;
        int subarrays = 1;
        for(int n : nums){
            if(currsum+n>mid){
                subarrays++;
                currsum=n;
            }
            else currsum+=n;
        }
        return subarrays;
    }
};