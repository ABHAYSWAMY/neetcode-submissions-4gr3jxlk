class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        map<char,int> maga;
        for(int i=0;i<magazine.size();i++) maga[magazine[i]]++;
        for(int i =0; i<ransomNote.size();i++){
            char c = ransomNote[i];
            if(maga[c]==0) return false;
            else maga[c]--;
        }
        
    return true;
    }
};