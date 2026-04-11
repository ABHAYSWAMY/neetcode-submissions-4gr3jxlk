class KthLargest {
private:
    priority_queue<int, vector<int>, greater<int>> minheap;
    int a;
public:
    KthLargest(int k, vector<int>& nums) {
        a=k;
        for(int i=0;i<nums.size();i++){
            minheap.emplace(nums[i]);
            if(minheap.size() > a) minheap.pop();
        }
    }
    
    int add(int val) {
        minheap.emplace(val);
        if(minheap.size() > a) minheap.pop();
        return minheap.top();
    }
};
