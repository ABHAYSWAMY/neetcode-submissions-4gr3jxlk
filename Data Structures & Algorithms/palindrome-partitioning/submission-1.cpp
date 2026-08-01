class Solution {
public:
    bool ispalindrome(string& s,int left,int right){
        while(left<right){
            if(s[left]!=s[right]) return false;
            left++;
            right--;
        }
        return true;
    }

    void backtrack(int i,string& s,vector<string>& curr,vector<vector<string>>& ans){
        if(i==s.size()){
            ans.push_back(curr);
            return;
        }
        for(int endofstring = i;endofstring<s.size();endofstring++){
            if(!ispalindrome(s,i,endofstring)) continue;
            curr.push_back(s.substr(i,endofstring-i+1));
            backtrack(endofstring+1,s,curr,ans);
            curr.pop_back();
        }
    }

    vector<vector<string>> partition(string s) {
        vector<string> curr;
        vector<vector<string>> ans;
        backtrack(0,s,curr,ans);
        return ans;
    }
};
