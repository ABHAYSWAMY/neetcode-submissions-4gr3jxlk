class Solution {
public:
    int backtrack(int i,int curr_xor,vector<int>& nums){
        if(i==nums.size()){
            return curr_xor;
        }
        int nxt_xor = curr_xor^nums[i];
        return (backtrack(i+1,nxt_xor,nums)+backtrack(i+1,curr_xor,nums));
    }

    int subsetXORSum(vector<int>& nums) {
        return(backtrack(0,0,nums));
    }
};