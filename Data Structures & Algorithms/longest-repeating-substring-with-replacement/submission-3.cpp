class Solution {
public:
    int characterReplacement(string s, int k) {
        vector<int> arr(26,0);
        int left=0,res=0,maxfreq=0;
        for(int right=0;right<s.size();right++){
            arr[s[right]-'A']++;
            maxfreq = max(maxfreq,arr[s[right]-'A']);
            while(((right-left+1)-maxfreq)>k){
                arr[s[left]-'A']--;
                left++;
            }
            res = max(res,right-left+1);
        }
        return res;
    }
};
