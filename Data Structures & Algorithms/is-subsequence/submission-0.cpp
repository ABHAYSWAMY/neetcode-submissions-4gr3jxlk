class Solution {
public:
    bool isSubsequence(string s, string t) {
        int match = s.size();
        int curr = 0;
        for(int i = 0; i < t.size() ; i++){
            if(s[curr] == t[i] ) curr++;
            if (curr == match) return true;
        }
        return false;
    }
};