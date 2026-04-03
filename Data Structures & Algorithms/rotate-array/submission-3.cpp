class Solution {
public:
    void swap(vector<int>& vec,int a,int b){
          while(a<=b){
            int temp;
            temp=vec[a];
            vec[a]=vec[b];
            vec[b]=temp;
            a++;
            b--;
          }}
    
    void rotate(vector<int>& nums, int k) {
        int j = nums.size()-1;
        k = k%nums.size();
        swap(nums,0,j);
        swap(nums,0,k-1);
        swap(nums,k,j);
    }
};