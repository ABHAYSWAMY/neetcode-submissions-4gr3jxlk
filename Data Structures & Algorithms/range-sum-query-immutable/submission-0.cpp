class NumArray {
public:
    vector<int> prefix;
    NumArray(vector<int>& nums) {
        int n = nums.size();
        prefix.assign(n+1,0);
        for(int i=1;i<=n;i++) prefix[i] = nums[i-1] + prefix[i-1];
    }
    
    int sumRange(int left, int right) {
        int ans = prefix[right+1] - prefix[left];
        return ans;
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(left,right);
 */