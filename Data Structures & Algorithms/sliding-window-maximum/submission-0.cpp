class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        vector<int> result;
        int size = nums.size();
        int no_of_win = nums.size()-k+1;
        for(int i = 0; i<no_of_win ; i++){
            int res = *max_element(nums.begin()+i,nums.begin()+i+k);
            result.push_back(res);
        } return result;
    }
};
