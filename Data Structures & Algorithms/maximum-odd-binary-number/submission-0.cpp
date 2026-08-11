class Solution {
public:
    string maximumOddBinaryNumber(string s) {
        int ones = 0,zeros = 0;
        string ans;
        for(char c : s){
            if(c=='1') ones++;
            else zeros++;
        }
        ans.append(ones-1,'1');
        ans.append(zeros,'0');
        ans.push_back('1');
        return ans;
    }
};