class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int> res(nums.size()+1,0);
        vector<int> res2;
        for(int i=0;i<nums.size();i++) res[nums[i]]++;
        for(int i=1;i<res.size();i++){
            if(res[i]==0) res2.push_back(i);
        }
        return res2;
    }
};