class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
        unordered_map<string,int> freq;
        for(auto value : arr) freq[value]++;
        int count = 0;
        for(auto value : arr){
            if(freq[value]==1) count++;
            if(count == k) return value;
        }
        return "";

    }
};