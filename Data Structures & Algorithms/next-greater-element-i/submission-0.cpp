class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> hash(nums2.size(),-1);
        unordered_map<int,int> mp;
        vector<int> res;
        int grt;
        for(int i = nums2.size()-2;i>=0;i--){
            int j = i+1;
            while(j<nums2.size()){
                if(nums2[j]>nums2[i]){
                    hash[i]=nums2[j];
                    break;
                }
                j++;
            }
        }
        for(int i=0;i<nums2.size();i++){
            mp[nums2[i]] = i;
        }

        for(int i=0;i<nums1.size();i++){
            int index = mp[nums1[i]];
            res.push_back(hash[index]);
        }

        return res;

    }
};