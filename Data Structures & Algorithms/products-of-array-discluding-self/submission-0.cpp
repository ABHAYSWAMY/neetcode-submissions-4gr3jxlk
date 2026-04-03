class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int siz = nums.size();
        vector<int> res;
        for(int i = 0;i<siz;i++){
            int num = 1;
            for(int j=0;j<siz;j++){
                if(i!=j) num*=nums[j];
                else continue;
            }
            res.push_back(num);
        }
        return res;
    }
};
