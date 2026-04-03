class Solution {
public:
    int maxNumberOfBalloons(string text) {
        vector<int> str(26,0);
        for(int i=0;i<text.size();i++) str[text[i]-'a']++;
        int count = 0;
        bool ans = true;
        while(ans){
            if(str[0]>0 && str[1]>0 && str[11]>1 && str[14]>1 && str[13]>0){
                count++;
                str[0]--;
                str[1]--;
                str[11] -= 2;
                str[14] -= 2;
                str[13]--;
            }
            else ans = false;
        }
        return count;
    }
};