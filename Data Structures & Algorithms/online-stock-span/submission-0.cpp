class StockSpanner {
private:
    stack<int> order;
    stack<int> valid;
public:
    StockSpanner() {
        
    }
    
    int next(int price) {
        while(!order.empty() && price >= order.top()){
            int vld = order.top();
            order.pop();
            valid.push(vld);
        }
        int ans = 1+valid.size();
        while(!valid.empty()){
            order.push(valid.top());
            valid.pop();
        }
        order.push(price);
        return ans;
    }
};

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */