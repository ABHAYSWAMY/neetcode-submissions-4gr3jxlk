class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        
        int b = n-1;
        int c = m-1;
        int a = m+n-1;
        while(c>=0 && b>=0){
            if(nums1[c]>=nums2[b]) {
                nums1[a]=nums1[c];
                c--;}
            else {
                nums1[a]=nums2[b];
                b--;}
            a--;
        }
        while (b>=0){
            nums1[a]=nums2[b];
            a--;
            b--;
        }
        
    }
};