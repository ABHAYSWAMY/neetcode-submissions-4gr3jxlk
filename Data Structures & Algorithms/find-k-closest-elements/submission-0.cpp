class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        vector<int> res;
        int right = lower_bound(arr.begin(),arr.end(),x) - arr.begin();
        int left = right-1;
        while(k>0){
            if(left<0) res.push_back(arr[right++]);
            else if(right>=arr.size()) res.push_back(arr[left--]);
            else if(abs(arr[left]-x)<=abs(arr[right]-x)) res.push_back(arr[left--]);
            else res.push_back(arr[right++]);
            k--;
        }
        sort(res.begin(),res.end());

        return res;
    }
};