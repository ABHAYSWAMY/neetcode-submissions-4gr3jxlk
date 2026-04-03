class Solution {
public:
    int appendCharacters(string s, string t) {
        int count = 0;
        int i=0,j=0;
        while(i<s.size() && j<t.size()){
            if(s[i]==t[j]){
                i++;
                j++;
            }
            else i++;
        }
        if(j>=t.size()) return 0;
        else{
            while(j!=t.size()) {
                count++;
                j++;
            }
        }
        return count;
    }
};