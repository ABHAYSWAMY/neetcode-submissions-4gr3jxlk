class Solution {
public:
    void backtrack(int i,string& curr,string& digits,vector<string>& mapp,vector<string>& ans){
        if(i == digits.size()){
            ans.push_back(curr);
            return;
        }

        int digit = digits[i] - '0';

        for(char c : mapp[digit]){
            curr.push_back(c);
            backtrack(i+1,curr,digits,mapp,ans);
            curr.pop_back();
        }
    }

    vector<string> letterCombinations(string digits) {
        if(!digits.size()) return {};
        vector<string> mapp = {"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        string curr = "";
        vector<string> ans;
        backtrack(0,curr,digits,mapp,ans);
        return ans;
    }
};
