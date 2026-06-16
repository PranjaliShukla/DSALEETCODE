class Solution {
public:
    string processStr(string s) {
        int si=s.size();
        string ans;
        for(int i=0;i<si;i++){

            if(isalpha(s[i])){
                ans=ans+s[i];
            }
            else if(s[i]=='*'){
                if(!ans.empty()){
                    ans.pop_back();
                }
            }
            else if(s[i]=='#'){
                ans=ans+ans;
            }
            else if(s[i]=='%'){
                reverse(ans.begin(),ans.end());
            }

        }
        return ans;
        
    }
};