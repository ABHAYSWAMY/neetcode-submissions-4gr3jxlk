class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        deque<int> maxD;
        vector<int> res;
        int left=0,right=k-1;
        for(int i=0;i<=right;i++){
            while(!maxD.empty() && nums[i] > maxD.back()) maxD.pop_back();
            maxD.push_back(nums[i]);
        }
        res.push_back(maxD.front());
        while(right<nums.size()){
            right++;
            if(right==nums.size()) break;
            while(!maxD.empty() && nums[right] > maxD.back()) maxD.pop_back();
            maxD.push_back(nums[right]);
            if(nums[left]==maxD.front()) maxD.pop_front();
            left++;
            res.push_back(maxD.front());
        }
        return res;
    }
};
