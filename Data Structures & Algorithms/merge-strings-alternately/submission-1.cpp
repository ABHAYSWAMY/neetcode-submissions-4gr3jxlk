class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string str;
        int k = 0;
        int m =0; 
        while(k<word1.size() && m<word2.size()){
            str+=word1[k];
            str+=word2[m];
            k++;
            m++;
        }
        while(k<word1.size()){
            str+=word1[k];
            k++;
        }
        while(m<word2.size()){
            str+=word2[m];
            m++;
        }
       return str; 
    }
};