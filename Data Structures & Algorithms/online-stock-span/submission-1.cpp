class StockSpanner {
private:
    stack<pair<int,int>> order;
public:
    StockSpanner() {
        
    }
    
    int next(int price) {
        int span = 1;
        while(!order.empty() && price >= order.top().first){
            span += order.top().second;
            order.pop();
        }
        order.push({price,span});
        return span;
    }
};

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */