class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(g.begin(),g.end());
        sort(s.begin(),s.end());
        int count = 0;
        int track=0;
        for(int i=0;i<s.size();i++){
            if(track<g.size() && s[i]>=g[track]){
                track++;
                count++;
            }
        }
        return count;
    }
};