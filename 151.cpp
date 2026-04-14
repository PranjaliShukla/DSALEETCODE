class Solution {
public:
    string reverseWords(string s) {
        int j=s.size()-1;
        int i=0;
        string si;
        string r;
        for(int i=j;i>=0;i--){
            
            if(s[i]!=' '){
                r=r+s[i];
            }
            else{
                if(!r.empty()){
                reverse(r.begin(),r.end());
                if(!si.empty())
                    si+=" ";
                    si=si+r;
                    r="";
                
                }
                
            }
            
        }
        if(!r.empty()){
            reverse(r.begin(),r.end());
            if(!si.empty())
            si+=" ";
            si=si+r;
        }
        return si;
        
        
    }
};
//revised