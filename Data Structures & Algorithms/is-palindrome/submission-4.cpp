class Solution {
public:
    bool check(string s){
        int i=0,j=s.size()-1;
        while(i<=j){
            if(s[i]==s[j]){
                i++;
                j--;
            }
            else return false;
        }
        return true;
    }
    bool isPalindrome(string s) {
        string t;
        for(int i=0;i<s.size();i++){
            if((s[i] >= 'a' && s[i]<='z') || (s[i] >= 'A' && s[i]<='Z') || (s[i] >= '0' && s[i]<='9')) t+=tolower(s[i]);
        }
        return check(t);
    } 
};
