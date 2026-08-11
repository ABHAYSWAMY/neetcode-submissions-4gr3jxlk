class Solution {
public:
    int maxDepth(string s) {
        int maxdepth = 0,currdepth = 0;
        for(char c : s){
            if(c=='(') currdepth++;
            if(c==')') currdepth--;
            maxdepth = max(maxdepth,currdepth);
        }
        return maxdepth;
    }
};