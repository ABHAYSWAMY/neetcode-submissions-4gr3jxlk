class Solution {
public:
    int backtrack(int i,int curr_xor,int sum,vector<int>& nums){
        if(i==nums.size()){
            sum=curr_xor;
            return sum;
        }
        int nxt_xor = curr_xor^nums[i];
        return (backtrack(i+1,nxt_xor,sum,nums)+backtrack(i+1,curr_xor,sum,nums));
    }

    int subsetXORSum(vector<int>& nums) {
        return(backtrack(0,0,0,nums));
    }
};