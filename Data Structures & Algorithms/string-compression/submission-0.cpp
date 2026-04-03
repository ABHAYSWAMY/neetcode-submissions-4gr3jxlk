class Solution {
public:
    int compress(vector<char>& chars) {
        int n = chars.size();
        int i=0,j=0,count=0;
        while(i<n && j<n){
            while(j<n && chars[i]==chars[j]){
                j++;
                count++;
            }
            if(count==1){
                chars.push_back(chars[i]);
            }
            else{
                chars.push_back(chars[i]);
                string num = to_string(count);
                for(char value : num) chars.push_back(value);   
            }
            i=j;
            count=0;
        }
        int x = chars.size()-n;
        for(int i=0;i<x;i++) chars[i]=chars[n+i];
        return x;
    }
};