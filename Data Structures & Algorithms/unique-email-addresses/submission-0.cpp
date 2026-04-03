class Solution {
public:
    int numUniqueEmails(vector<string>& emails) {
        unordered_set<string> res;
        for(int i =0;i<emails.size();i++){
            string local = "";
            string domain = "";
            int j = 0;
            while(emails[i][j]!='@'){
                if(emails[i][j]=='+'){
                    while(emails[i][j]!='@') j++;
                    break;
                }
                if(emails[i][j]!='.') local+=emails[i][j];
                j++;
            }
            while(j<emails[i].size()){
                domain+=emails[i][j];
                j++;
            }
            res.insert(local+domain);
        }
        return res.size();
    }
};