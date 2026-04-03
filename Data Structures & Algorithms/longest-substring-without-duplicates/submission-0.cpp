class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> str;
        int left = 0,maxx = 0;
        for(int right = 0; right<s.size() ; right++){
            while(str.count(s[right])){
                str.erase(s[left]);
                left++;
            }
            str.insert(s[right]);
            maxx = max(maxx,right-left+1);
        } return maxx;
    }
};
