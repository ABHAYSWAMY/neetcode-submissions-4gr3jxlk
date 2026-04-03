class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector<int> result;
        set<int> res;
        unordered_map<int,int> m;
        int a = nums.size()/3;
        for(auto num : nums){
           m[num]++;
           if(m[num]>a && !res.count(num)){
            res.insert(num);
            result.push_back(num);
           }
        }
        return result;
    }
};