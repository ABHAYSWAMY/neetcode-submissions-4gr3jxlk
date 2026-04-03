class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int left=0,right=0,maxx=0;
        while(right<prices.size()){
            if(prices[right]<prices[left]) left=right;
            if(prices[right]>prices[left]) maxx= maxx>(prices[right]-prices[left])?maxx:(prices[right]-prices[left]);
            right++;
        }
        return maxx;
    }
};
