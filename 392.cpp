class Solution {
public:
    bool isSubsequence(string s, string t) {
        int si=s.size();
        int ti=t.size();
        int i=0,j=0;
        while(i<si  && j<ti){
            if(s[i]==t[j]){
                i++;
            }
            j++;
        }
        if(i==si){
            return true;
        }
        return false;


        
    }
};