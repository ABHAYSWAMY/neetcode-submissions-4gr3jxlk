class Solution {
public:
    bool validWordAbbreviation(string word, string abbr) {
        int i=0,j=0;
        while(i<abbr.size() && j<word.size()){
            if(isalpha(abbr[i])){
                if(abbr[i]!=word[j]) return false;
                i++;
                j++;
            }
            else{
                if(abbr[i]=='0') return false;
                string str;
                int num=0;
                while(i<abbr.size() && isdigit(abbr[i])) str+=abbr[i++];
                if(str.size()>0){
                    num = stoi(str);
                }
                j+=num;
            }
        }
        return i==abbr.size() && j==word.size();
    }
};