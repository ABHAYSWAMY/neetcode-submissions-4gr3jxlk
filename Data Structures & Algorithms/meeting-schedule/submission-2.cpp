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
        vector<int> res(10e6+1,0);
        for(auto interval : intervals){
            res[interval.start]++;
            res[interval.end]--;
        }
        int sum = 0;
        for(int i = 0;i<res.size();i++){
            sum += res[i];
            res[i] = sum;
        }
        for(int i = 0;i<res.size();i++) if(res[i]>1) return false;
        
        return true;
    }
};
