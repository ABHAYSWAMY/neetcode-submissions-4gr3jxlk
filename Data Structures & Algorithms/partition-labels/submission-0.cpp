class Solution {
public:
    vector<int> partitionLabels(string s) {
        vector<int> result,lastend(26,0);
        int start=0,end=0;

        for(int i=0;i<s.size();i++){
            lastend[s[i]-'a'] = i;
        }

        for(int i=0;i<s.size();i++){
            end = max(end, lastend[s[i] - 'a']);
            if(i==end){
                result.push_back(end-start+1);
                start = i+1;
            }
        }

        return result;
    }
};
