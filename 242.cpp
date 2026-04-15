class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int>mp1;
        unordered_map<char,int>mp2;
        if(s.size()!=t.size())return false;
        for(char x:s){
            mp1[x]++;
        }
        for(char y:t){
            mp2[y]++;
        }
        for(auto &it:mp1){
            if(mp1[it.first]!=mp2[it.first]){
                return false;
            }
        }
        return true;


        
    }
};