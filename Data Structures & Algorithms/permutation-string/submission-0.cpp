class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if (s2.size()<s1.size()) return false;
        vector<int> res1(26,0);
        vector<int> res2(26,0);
        for(int i=0;i<s1.size();i++) res1[s1[i]-'a']++;
        int left=0,right=s1.size()-1;
        for(int i=0;i<=right;i++) res2[s2[i]-'a']++;
        if(res1==res2) return true;
        while(right<s2.size()){
            right++;
            if(right==s2.size()) break;
            res2[s2[right]-'a']++;
            res2[s2[left]-'a']--;
            left++;
            if(res1==res2) return true;
        }
        return false;
    }
};
