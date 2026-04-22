class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        vector<int> res(26,0);
        int nooftasks = tasks.size();
        for(int i=0;i<tasks.size();i++) res[tasks[i]-'A']++;
        int maxfreq=0;
        for(int i=0;i<26;i++) maxfreq = max(maxfreq,res[i]);
        int maxcount = 0;
        for(int i=0;i<26;i++) if(res[i]==maxfreq) maxcount++;
        int minskeleton = ((maxfreq-1)*(n+1))+maxcount;
        return max(nooftasks,minskeleton);
    }
};
