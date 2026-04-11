class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        vector<vector<int>> res;
        int sum;
        priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> minhp;
        for(int i=0;i<points.size();i++){
            sum = (points[i][0]*points[i][0])+(points[i][1]*points[i][1]);
            minhp.push({sum,i});
        }
        int a = k;
        while(a>0){
            int x = minhp.top().second;
            minhp.pop();
            res.push_back(points[x]);
            a--;
        }
        return res;
    }
};
