class Solution {
public:

    string encode(vector<string>& strs) {
     string enc="";
     for(string &str : strs){
        enc += to_string(str.size())+"#"+str;
     }  return enc;
    }

    vector<string> decode(string s) {
     vector<string> res;
     int i = 0;
     while(i<s.size()){
        int j = i;
        while(s[j]!='#') j++;
        int len = stoi(s.substr(i,j-i));
        string add = s.substr(j+1,len);
        res.push_back(add);
        i = j+1+len;
     }
      return res;
    }
};
