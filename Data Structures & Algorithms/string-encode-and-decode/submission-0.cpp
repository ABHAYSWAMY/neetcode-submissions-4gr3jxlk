class Solution {
public:

    string encode(vector<string>& strs) {
     string enc="";
     int siz = strs.size();
     for(int i = 0; i < siz; i++){
        enc+=strs[i];
        enc+="/";
     }  return enc;    
    }

    vector<string> decode(string s) {
     vector<string> res;
     int siz = s.size();
     string str = "";
     for(int i = 0;i<siz;i++){
        char me = s[i];
        if(me!='/') str+=me;
        else{
            res.push_back(str);
            str = "";
        }
     } return res;
    }
};
