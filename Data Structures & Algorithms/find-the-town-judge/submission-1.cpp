class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        if (trust.size()==0) return -1;
        if (trust.size() != n-1 ) return -1;
        int judge = trust[0][1];
        for(int i=0;i<trust.size();i++){
            if (trust[i][1] != judge) return -1;
            if (trust[i][0] == judge) return -1;
        }
        return judge;
        
    }
};