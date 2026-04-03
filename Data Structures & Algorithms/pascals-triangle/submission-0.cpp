class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> res;
        vector<int> temp1 = {1};
        res.push_back(temp1);
        if(numRows==1) return res;
        vector<int> temp2 = {1,1};
        res.push_back(temp2);
        if(numRows==2) return res;
        for(int i=2;i<numRows;i++){
            vector<int> temp3;
            for(int j=0;j<=i;j++){
                if(j==0 || j==i) temp3.push_back(1);
                else temp3.push_back(res[i-1][j-1]+res[i-1][j]);
            }
            res.push_back(temp3);
        }
        return res;
    }
};