class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int> stone;
        for(auto num : stones) stone.push(num);
        while(stone.size() > 1){
            int fst = stone.top();
            stone.pop();
            int sec = stone.top();
            stone.pop();
            int res = abs(fst-sec);
            if (res != 0) stone.push(res);
        } return stone.empty()?0:stone.top();
    }
};
