class Solution {
public:
    int findLucky(vector<int>& arr) {
        map<int,int> freq;
        for(int i = 0; i< arr.size();i++){
            freq[arr[i]*-1]++;
        }
        for(auto value : freq){
            if((value.first*-1) == value.second) return value.second;
        }

        return -1;
    }
};