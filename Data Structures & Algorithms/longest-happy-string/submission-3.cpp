class Solution {
public:
    string longestDiverseString(int a, int b, int c) {
        priority_queue<pair<int,char>> freq;
        if(a>0) freq.push({a,'a'});
        if(b>0) freq.push({b,'b'});
        if(c>0) freq.push({c,'c'});
        string res = "";
        while(freq.size()>0){
            auto [f1,c1] = freq.top();
            freq.pop();
            int n = res.size();
            if(n>=2 && res[n-1]==c1 && res[n-2]==c1){
                if(freq.size()==0) break;
                auto [f2,c2] = freq.top();
                freq.pop();
                res+=c2;
                if(--f2>0) freq.push({f2,c2});
                freq.push({f1,c1});
            }
            else{
                res+=c1;
                if(--f1>0) freq.push({f1,c1});
            }
        }
        return res;
    }
};