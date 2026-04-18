class Solution {
public:
    bool returnk(vector<int>& piles,int k,int h){
        int counthrs = 0;
        for(int i=0;i<piles.size();i++){
            if(piles[i]%k==0) counthrs = counthrs + (piles[i]/k);
            else counthrs = counthrs + (piles[i]/k) + 1;
        }
        if (counthrs<=h) return true;
        else return false;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int low = 1;
        int high = *max_element(piles.begin(),piles.end());
        int ans = high;
        while(low<=high){
            int mid = low + (high-low)/2;
            bool validrate = returnk(piles,mid,h);
            if(validrate){
                ans = mid;
                high = mid - 1;
            }
            else low = mid + 1;
        }
        return ans;
    }
};
