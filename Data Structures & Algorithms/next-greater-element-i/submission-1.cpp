class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        stack<int> stk;
        unordered_map<int,int> nextg;
        for(int i=nums2.size()-1;i>=0;i--){
            while(!stk.empty() && stk.top()<=nums2[i]) stk.pop();
            nextg[nums2[i]] = stk.empty() ? -1 : stk.top();
            stk.push(nums2[i]);
        }
        vector<int> res;
        for(int i=0;i<nums1.size();i++) res.push_back(nextg[nums1[i]]);
        return res;
    }
};