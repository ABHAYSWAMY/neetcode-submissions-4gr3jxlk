class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> fwd(nums.size()+1,1);
        vector<int> bwd(nums.size()+1,1);
        vector<int> res;
        for(int i=1;i<fwd.size();i++) fwd[i] = fwd[i-1]*nums[i-1];
        for(int i=bwd.size()-2;i>=0;i--) bwd[i] = bwd[i+1]*nums[i];
        for(int i=0;i<nums.size();i++) res.push_back(fwd[i]*bwd[i+1]);
        return res;
    }
};
