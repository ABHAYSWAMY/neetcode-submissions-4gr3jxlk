class Solution {
public:
    int maxDifference(string s) {
        vector<int> hash(26,0);
        for(int i=0;i<s.size();i++)  hash[s[i]-'a']++;
        int min_even = 101;
        int max_odd = 0;
        for(int i =0;i<hash.size();i++){

            if(hash[i]==0) continue;
            if(hash[i]%2==0) min_even = min_even>hash[i]?hash[i]:min_even;
            if(hash[i]%2==1) max_odd = max_odd>hash[i]?max_odd:hash[i];
        }
        return max_odd-min_even;

    }
};