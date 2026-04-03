class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        sort(people.begin(),people.end());
        int res = 0,low = 0,high = people.size()-1;
        while(low<=high){
            int remain = limit - people[high--];
            res++;
            if((people[low]<=remain)) low++;
        }
        return res;
        
    }
};