class Solution {
public:
    unordered_set<string> st;

    void backtrack(int index,string& s,vector<string>& wordDict,vector<string>& curr,vector<string>& ans){
        if(index==s.size()){
            string temp;
            for(auto part : curr){
                temp += (part + ' ');
            }
            temp.pop_back();
            ans.push_back(temp);
            return;
        }
        for(int i=index;i<s.size();i++){
            if(!st.count(s.substr(index,i-index+1))) continue;
            curr.push_back(s.substr(index,i-index+1));
            backtrack(i+1,s,wordDict,curr,ans);
            curr.pop_back();
        }
    }

    vector<string> wordBreak(string s, vector<string>& wordDict) {
        for(auto word : wordDict) st.insert(word);
        vector<string> curr;
        vector<string> ans;
        backtrack(0,s,wordDict,curr,ans);
        return ans;
    }
};