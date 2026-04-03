class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int a=1;
        for(int b=1;b<nums.size();b++){
            if(nums[b]!=nums[b-1]){
                nums[a++]=nums[b]; 
            }
        } return a;
    }
};