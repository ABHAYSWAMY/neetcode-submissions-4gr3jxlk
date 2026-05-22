/**
 * Definition of Interval:
 * class Interval {
 * public:
 *     int start, end;
 *     Interval(int start, int end) {
 *         this->start = start;
 *         this->end = end;
 *     }
 * }
 */

class Solution {
public:
    bool canAttendMeetings(vector<Interval>& intervals) {
        if((int)intervals.size()==0) return true;
        vector<pair<int,int>> res;
        for(auto interval : intervals) res.push_back({interval.start,interval.end});
        sort(res.begin(), res.end());
        for(int i=0;i<res.size()-1;i++) if(res[i].second>res[i+1].first) return false;
        
        return true;
    }
};
