class Solution {
public:
    int compress(vector<char>& chars) {
        int n = chars.size();
        int i=0,j=0,count=0,write=0;
        while(i<n && j<n){
            while(j<n && chars[i]==chars[j]){
                j++;
                count++;
            }
            if(count==1){
                chars[write++]=chars[i];
            }
            else{
                chars[write++]=chars[i];
                string num = to_string(count);
                for(char value : num) chars[write++]=value;   
            }
            i=j;
            count=0;
        }
        return write;
    }
};