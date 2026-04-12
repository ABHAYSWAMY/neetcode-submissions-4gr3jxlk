class Solution {
public:
    string reorganizeString(string s) {
        vector<int> res(26,0);
        for(int i=0;i<s.size();i++) res[s[i]-'a']++;
        int currmax=0;
        for(int i=0;i<26;i++) currmax = max(currmax,res[i]);
        int n = s.size();
        if(currmax>(n+1)/2) return "";
        priority_queue<pair<int,char>> freq;
        for(int i=0;i<26;i++) if(res[i]>0) freq.push({res[i],(char)(i+'a')});
        string answer = "";
        while((int)freq.size() > 1){
            int f1=freq.top().first;
            char g1=freq.top().second;
            freq.pop();
            int f2=freq.top().first;
            char g2=freq.top().second;
            freq.pop();
            answer += g1;
            answer += g2;
            if(--f1>0) freq.push({f1,g1});
            if(--f2>0) freq.push({f2,g2});
        }
        if((int)freq.size()==1) answer+=freq.top().second;
        return answer;
    }
};