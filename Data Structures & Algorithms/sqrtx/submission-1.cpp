class Solution {
public:
    int mySqrt(int x) {
        if (x == 0 || x==1) return x;
        long long low = 1;
        long long high = x;
        long long ans; 
        while(low<=high){
            long long mid = (low+high)/2;
            if (mid*mid == x) return mid;
            else if(mid*mid>x) high = mid-1;
            else {
                ans = mid;
                low = mid+1;}
        } return ans;
    }
};