class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int> res(101,0);
        int x=1;
        int count=0;
        for(int i=0;i<heights.size();i++) res[heights[i]]++;
        for(int i=0;i<heights.size();i++){
            while(res[x]==0 && x<res.size()) x++;
            if(x!=heights[i]) count++;
            res[x]--;
        }
        return count;
    }
};