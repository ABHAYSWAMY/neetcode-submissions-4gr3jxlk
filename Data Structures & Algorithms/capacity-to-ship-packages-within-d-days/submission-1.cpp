class Solution {
public:
    int days2(int mid2,vector<int>& weights){
            int day = 1;
            int weight = 0;
            int siz = weights.size();
            for(int i=0;i<siz;i++){
                if(weight+weights[i]>mid2){
                    day++;
                    weight=weights[i];
                }
                else weight+=weights[i];        
            } return day;
        }
    int shipWithinDays(vector<int>& weights, int days) {
        int low = *max_element(weights.begin(),weights.end());
        int high = accumulate(weights.begin(),weights.end(),0);
        int mid;
        int res;
        while(low<=high){
            mid = (low+high)/2;
            int days3 = days2(mid,weights);
            if(days3>days) low = mid+1;
            else {res = mid;
              high = mid-1;}
        } return res;
    }
};