class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        int count=0,left=0,right=k-1,avg=0,sum=0;
        for(int i=0;i<=right;i++) sum+=arr[i];
        avg = sum/k;
        if(avg>=threshold) count++;
        while(right<arr.size() && left<arr.size()){
            right++;
            if(right>=arr.size()) break;
            sum+=arr[right];
            sum-=arr[left];
            left++;
            avg = sum/k;
            if(avg>=threshold) count++;
        }
        return count;
    }
};