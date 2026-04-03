class Solution {
public:
    bool isPalindrome(string s) {
        vector<char> res;
        for(int i=0; i<s.size() ; i++){
            if(isalnum(s[i])){
                char low = tolower(s[i]);
                res.push_back(low);
            }
        }
        int j=res.size()-1;
        for(int i=0; i<res.size()/2 ; i++){
            if(res[i] != res[j]) return false;
            j--;
        }
        return true;
    }
};
