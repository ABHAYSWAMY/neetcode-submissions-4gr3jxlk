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
    int minMeetingRooms(vector<Interval>& intervals) {
        int high = 0;
        for(auto interval : intervals) high = max(high,max(interval.start,interval.end));
        vector<int> res(high+1,0);  
        for(int i=0;i<intervals.size();i++){
            res[intervals[i].start]++;
            res[intervals[i].end]--;
        }
        int sum = 0;
        int high2 = 0;
        for(int i=0;i<res.size();i++){
            sum += res[i];
            res[i] = sum;
            high2 = max(res[i],high2);
        }
        return high2;
    }
};
