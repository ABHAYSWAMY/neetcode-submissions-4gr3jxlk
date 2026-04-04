class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int maxx=0,left=0,right=0;
        unordered_set<char> res;
        while(right<s.size()){
            if(res.count(s[right])){
                while(res.count(s[right])){
                    res.erase(s[left++]);
                }
            }
            res.insert(s[right]);
            maxx = max(maxx,right-left+1);
            right++;
        }
        return maxx;
    }
};
