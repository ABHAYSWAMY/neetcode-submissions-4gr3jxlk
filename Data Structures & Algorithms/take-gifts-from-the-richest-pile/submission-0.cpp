class Solution {
public:
    long long pickGifts(vector<int>& gifts, int k) {
        priority_queue<int> maxhp;
        int a = k;
        long long takeurgiftsbeach=0;
        for(int i=0;i<gifts.size();i++) maxhp.emplace(gifts[i]);
        while(a > 0){
            int x = sqrt(maxhp.top());
            maxhp.pop();
            maxhp.push(x);
            a--;
        }
        while(maxhp.size()>0){
            takeurgiftsbeach += maxhp.top();
            maxhp.pop();
        }
        return takeurgiftsbeach;
    }
};