class Solution {
public:
    bool isAnagram(string s, string t) {
        multiset<char> a;
        for(auto x : s) a.insert(x);
        multiset<char> b;
        for(auto x : t) b.insert(x);
        return a==b;
    }
};
