class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int low = 1;
        int high = *max_element(piles.begin(),piles.end());
        int k ;
        while (low<=high){
            int thrs = 0;
            int mid = (low+high)/2;
            for(int i = 0; i<piles.size(); i++){
                if (piles[i]%mid == 0) thrs += (piles[i]/mid);
                else thrs += ((piles[i]/mid)+1);
            }
            if (thrs>h) low = mid+1;
            else {
                k = mid;
                high = mid-1;
            }   
            
        } return k;
    }
};
