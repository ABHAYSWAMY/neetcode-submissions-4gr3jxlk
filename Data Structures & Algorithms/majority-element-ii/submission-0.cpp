class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector<int> result;
        set<int> res;
        unordered_map<int,int> m;
        int a = nums.size()/3;
        for(auto num : nums){
           m[num]++;
           if(m[num]>a) res.insert(num);
        }
        for(int num : res) result.push_back(num);
        return result;
    }
};