class MedianFinder {
private:
    priority_queue<double> maxhp;
    priority_queue<double, vector<double>, greater<double>> minhp;
    bool insert1 = false;

public:
    MedianFinder() {       
    }
    
    void addNum(int num) {
        if(!insert1){
            maxhp.push((double)num);
            insert1 = true;
        } 
        else if(num > maxhp.top()) minhp.push((double)num);
        else maxhp.push((double)num);

        if((int)maxhp.size() - (int)minhp.size() >= 2){
            double x = maxhp.top();
            maxhp.pop();
            minhp.push(x);
        }
        if((int)minhp.size() - (int)maxhp.size() >= 2){
            double x = minhp.top();
            minhp.pop();
            maxhp.push(x);
        }
    }
    
    double findMedian() {
    int n1 = maxhp.size();
    int n2 = minhp.size();

    if(n1 > n2) return maxhp.top();
    if(n2 > n1) return minhp.top();

    // both equal → must have at least 1 element
    if(n1 == 0) return 0; // safety (should not happen)

    return (maxhp.top() + minhp.top()) / 2.0;
}
};
