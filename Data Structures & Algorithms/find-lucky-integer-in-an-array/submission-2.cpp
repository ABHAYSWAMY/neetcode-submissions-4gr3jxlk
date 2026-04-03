class Solution {
public:
    int findLucky(vector<int>& arr) {
     vector<int> res(501,0);
     for(int i=0;i<arr.size();i++) res[arr[i]]++;
     for(int i=500;i>0;i--){
     if(i==res[i]) return i;
     }
     return -1;     
    }
};