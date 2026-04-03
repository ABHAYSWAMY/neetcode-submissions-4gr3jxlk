class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        vector<int> hash((grid.size()*grid.size())+1,0);
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid.size();j++){
                hash[grid[i][j]]++;
            }
        }
        vector<int> res(2,0);
        for(int i=1;i<hash.size();i++){
            if(hash[i]==0) res[1]=i;
            if(hash[i]==2) res[0]=i;
        }
        return res;
    }
};