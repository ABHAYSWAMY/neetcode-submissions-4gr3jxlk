class Solution {
public:
    int palindrome(string ch){
            int j = ch.size()-1;
            for(int i=0 ; i < ch.size() ; i++){
                if (ch[i] != ch[j]) return 0;
                j--;
            }
            return 1;
        }
    bool validPalindrome(string s) {
        
        
        for (auto i=0; i<s.size(); i++){
          string r = s;
          r.erase(i,1);
          int j = palindrome(r);
          if (j == 1) return true;
        }
        return false;
    }
};