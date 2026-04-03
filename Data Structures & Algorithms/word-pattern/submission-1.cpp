class Solution {
public:
    bool wordPattern(string pattern, string s) {
        unordered_map<char,string> st;
        unordered_map<string,char> ts;
        int x=0;
        int count=0;
        for(int i=0;i<pattern.size();i++){
          char ch=pattern[i];
          string str="";
          bool enter = false;
          while(x<s.size() && s[x]!=' '){
            str += s[x];
            x++;
            enter=true;
          }
          
          if(enter){
            count++;
            x++;
          }
          if(st.count(ch) && st[ch]!=str) return false;
          if(ts.count(str) && ts[str]!=ch) return false;
          st[ch]=str;
          ts[str]=ch;
        }
        if(count<pattern.size() || x<s.size()) return false;
        return true;
    }
};