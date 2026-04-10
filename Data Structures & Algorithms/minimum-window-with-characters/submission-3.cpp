class Solution {
public:
    string minWindow(string s, string t) {
        unordered_map<char,int> tfreq;
        for(int i=0;i<t.size();i++) tfreq[t[i]]++;
        unordered_map<char,int> sfreq;
        int left=0,right,leftrack=0,minlen=INT_MAX,required,formed=0;
        required = tfreq.size();
        for(right=0;right<s.size();right++){
            sfreq[s[right]]++;
            if(tfreq.count(s[right]) && sfreq[s[right]] == tfreq[s[right]]) formed++;
            while(formed == required){
                if(minlen > right-left+1){
                    minlen = right-left+1;
                    leftrack = left;
                }
                sfreq[s[left]]--;
                if(tfreq.count(s[left]) && (sfreq[s[left]]<tfreq[s[left]])) formed--;
                left++;
            }
        }
        return minlen==INT_MAX ? "" : s.substr(leftrack,minlen);
    }
};
