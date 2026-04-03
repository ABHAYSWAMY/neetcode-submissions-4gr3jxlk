class KthLargest {
public:
    int kth;
    priority_queue<int,vector<int>,greater<int>> stream;
    KthLargest(int k, vector<int>& nums) {
        kth = k;
        for(auto num : nums){
            stream.push(num);
            if(stream.size()>kth) stream.pop();
        }
    }
    
    int add(int val) {
        stream.push(val);
        if(stream.size()>kth) stream.pop();
        return stream.top();
    }
};
