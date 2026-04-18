class Solution {
public:
    bool canyouship(vector<int>& weights,int mid,int days){
        int countdays = 1;
        int load = 0;
        for(int i=0;i<weights.size();i++){
            if(load + weights[i] > mid){
                countdays++;
                load = 0;
            }
            load += weights[i];
        }
        if(countdays<=days) return true;
        else return false;
    }
    int shipWithinDays(vector<int>& weights, int days) {
       int low = *max_element(weights.begin(),weights.end());
       int high = 0;
       for(int i=0;i<weights.size();i++) high+=weights[i];
       int ans = high;
       while(low<=high){
        int mid = low + (high-low)/2;
        bool valid = canyouship(weights,mid,days);
        if(valid){
            ans = mid;
            high = mid - 1;
        }
        else low = mid + 1;
       }
       return ans; 
    }
};