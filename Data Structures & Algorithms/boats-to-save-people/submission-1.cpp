class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        int count=0;
        int i=0,j=people.size()-1;
        sort(people.begin(),people.end());
        while(i<j){
            if(people[j]+people[i]>limit){
                j--;
                count++;
            }
            if(people[j]+people[i]<=limit){
                count++;
                i++;
                j--;
            }
            if(i==j){
                count++;
                j--;
            }
        }
        return count;
    }
};