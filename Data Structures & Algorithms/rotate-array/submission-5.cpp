class Solution {
public:
    void rot(vector<int>& nums, int i, int j){
        while(i<=j){
            int t = nums[i];
            nums[i++] = nums[j];
            nums[j--] = t;
        }
    }
    void rotate(vector<int>& nums, int k) {
        int a = k%nums.size();
        rot(nums,0,nums.size()-1);
        rot(nums,0,a-1);
        rot(nums,a,nums.size()-1);
    }
};