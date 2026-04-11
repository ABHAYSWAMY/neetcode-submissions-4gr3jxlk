class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int> maxheap;
        int a,b;
        for(int i=0;i<stones.size();i++) maxheap.push(stones[i]);
        while(maxheap.size() > 1){
            a = maxheap.top();
            maxheap.pop();
            b = maxheap.top();
            maxheap.pop();
            int x = a-b;
            if(x!=0) maxheap.push(x);
        }
        return maxheap.size()==0? 0 : maxheap.top();
    }
};
