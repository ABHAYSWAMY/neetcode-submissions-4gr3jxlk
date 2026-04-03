class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int i=0,j=0;
        while(i<nums.size() && j<nums.size()){
            if(nums[i]%2==0 && i==j){
                i++;
                j++;
            }
            else if(nums[i]%2==1){
                while(j<nums.size() && nums[j]%2==1) j++;
                if(j<nums.size()) swap(nums[i],nums[j]);
                i++;
                while(i<nums.size() && nums[i]%2==0 && i<j) i++;
            }
        }
        return nums;
    }
};