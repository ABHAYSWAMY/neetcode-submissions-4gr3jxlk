class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int siz = nums.size();
        vector<int> res(siz,1);
        int prefix = 1;
        for(int i=0;i<siz;i++){
            res[i]=prefix;
            prefix*=nums[i];
        }
        int suffix = 1;
        for(int i=siz-1;i>=0;i--){
            res[i]*=suffix;
            suffix*=nums[i];
        }
        return res;
    }
};
