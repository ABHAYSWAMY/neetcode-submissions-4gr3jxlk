class Solution {
public:
    int maxNumberOfBalloons(string text) {
        vector<int> str(26,0);
        for(int i=0;i<text.size();i++) str[text[i]-'a']++;
        int count = min({str[0],str[1],str[11]/2,str[14]/2,str[13]});
        return count;
    }
};