class Solution {
  public:
    string removeSpaces(string& s) {
        string ans;
        for(int i=0;i<s.size();i++){
            if(s[i]!=' '){
                ans=ans+s[i];
            }
        }
        return ans;
        
    }
};