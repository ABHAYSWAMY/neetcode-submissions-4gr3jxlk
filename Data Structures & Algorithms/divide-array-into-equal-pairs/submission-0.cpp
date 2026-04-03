class Solution {
public:
    bool divideArray(vector<int>& nums) {
        int x = nums.size()&1;
        if(x==1) return false;
        int count=0;
        vector<int> res(501,0);
        for(int i=0;i<nums.size();i++) res[nums[i]]++;
        for(int i=1;i<res.size();i++){
            if(res[i]==0) continue;
            if(res[i]&1==1) return false;
            int x = res[i]/2;
            count +=x;
        }
        if(count!=(nums.size()/2)) return false;
        return true;
    }
};