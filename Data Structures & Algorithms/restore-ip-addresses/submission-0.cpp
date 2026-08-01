class Solution {
public:
    bool valid_segment(string part){
        if(part.size()>1 && part[0]=='0') return false;
        int num = stoi(part);
        return num<256;
    }

    void backtrack(int i,string& s,vector<string>& curr,vector<string>& ans){
        if(i==s.size() && curr.size()==4){
            ans.push_back(curr[0]+'.'+curr[1]+'.'+curr[2]+'.'+curr[3]);
            return;
        }
        if(i!=s.size() && curr.size()==4) return;
        for(int len=1;len<=3;len++){
            if(i+len>s.size()) break;
            string part = s.substr(i,len);
            if(!valid_segment(part)) continue;
            curr.push_back(part);
            backtrack(i+len,s,curr,ans);
            curr.pop_back();
        }
    }

    vector<string> restoreIpAddresses(string s) {
        vector<string> curr;
        vector<string> ans;
        backtrack(0,s,curr,ans);
        return ans;
    }
};