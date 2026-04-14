class Solution {
public:
    bool isIsomorphic(string s, string t) {
        int s1=s.size();
        int s2=t.size();
        unordered_map<char,char>mp;
        unordered_map<char,char>mp1;
        int i=0;
        int j=0;
        while(i<s1 && j<s2){
            if(mp.find(s[i])!=mp.end()){
                if(mp[s[i]]!=t[j]){
                    return false;
                }
               
               
             
               

            }
            else{
                mp[s[i]]=t[j];
            }
            if(mp1.find(t[j])!=mp.end()){
                if(mp1[t[j]]!=s[i]){
                    return false;
                }
            }
            else{
                mp1[t[j]]=s[i];
            }
            i++;
            j++;
            
                
                  
                
            
        }
        return true;


        
    }
};