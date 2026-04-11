class Solution {
public:
    bool carPooling(vector<vector<int>>& trips, int capacity) {
        vector<int> scanlinealgo(1001,0);
        for(int i=0;i<trips.size();i++){
            scanlinealgo[trips[i][1]] += trips[i][0];
            scanlinealgo[trips[i][2]] -= trips[i][0];
        }
        int sum=0;
        for(int i=0;i<scanlinealgo.size();i++){
            sum += scanlinealgo[i];
            if(sum>capacity) return false;
        }
        return true;
    }
};