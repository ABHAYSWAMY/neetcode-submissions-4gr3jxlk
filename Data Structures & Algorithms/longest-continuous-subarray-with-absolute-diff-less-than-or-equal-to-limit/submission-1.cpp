class Solution {
public:
    int longestSubarray(vector<int>& nums, int limit) {
        deque<int> maxD,minD;
        int left=0,maxx=0;
        for(int right=0;right<nums.size();right++){
            
            while(!maxD.empty() && maxD.back() < nums[right])
                maxD.pop_back();
            maxD.push_back(nums[right]);

            while(!minD.empty() && minD.back() > nums[right])
                minD.pop_back();
            minD.push_back(nums[right]);

            while((maxD.front() - minD.front()) > limit){
                if(nums[left]==maxD.front()) maxD.pop_front();
                if(nums[left]==minD.front()) minD.pop_front();
                left++;
            }

            maxx = max(maxx,right-left+1);
        }
        return maxx;
    }
};