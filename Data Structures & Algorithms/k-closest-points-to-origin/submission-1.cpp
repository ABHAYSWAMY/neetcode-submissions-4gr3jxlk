class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        vector<vector<int>> res;
        int sum;
        priority_queue<pair<int,int>> maxhp;
        for(int i=0;i<points.size();i++){
            sum = (points[i][0]*points[i][0])+(points[i][1]*points[i][1]);
            maxhp.push({sum,i});
            if(maxhp.size()>k) maxhp.pop();
        }
        int a = k;
        while(maxhp.size()>0){
            int x = maxhp.top().second;
            maxhp.pop();
            res.push_back(points[x]);
            a--;
        }
        return res;
    }
};
