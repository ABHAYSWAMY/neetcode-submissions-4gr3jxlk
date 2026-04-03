class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> res;
        set<vector<int>> res2;
        for(int i=0;i<nums.size();i++){
            for(int j=i+1;j<nums.size();j++){
                for(int k=j+1;k<nums.size();k++){
                    if(nums[i]+nums[j]+nums[k]==0){
                        vector<int> t = {nums[i],nums[j],nums[k]};
                        sort(t.begin(),t.end());
                     res2.insert(t);
                    }                 
                }
            }
        }
        for(auto n : res2) res.push_back(n);
        return res;
    }
}; 
    

