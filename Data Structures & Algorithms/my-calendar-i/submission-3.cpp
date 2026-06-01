class MyCalendar {
public:
    MyCalendar() {
        
    }
    vector<pair<int,int>> res;
    bool book(int startTime, int endTime) {
        for(auto &it : res){
            if(!(startTime >= it.second ||
            it.first >= endTime))
            return false;
        }
        res.push_back({startTime,endTime});
        return true;
    }
};

/**
 * Your MyCalendar object will be instantiated and called as such:
 * MyCalendar* obj = new MyCalendar();
 * bool param_1 = obj->book(startTime,endTime);
 */