class Solution {
public:
    int numberOfSpecialChars(string word) {
        int s=word.size();
        map<char,int>mp;
        int i=0;
        for(char c:word){
            if(islower(c)){
                mp[c]=i;
               
              
                   
                 
                
           
                
              
                

            }
            else{
                if(mp.find(c)==mp.end()){
                    mp[c]=i;
                    
                }

            }
            i++;

        }
        int c=0;
        for(auto &it:mp){
            if(isupper(it.first)){
                char t=it.first+32;
                if(mp.find(t)!=mp.end()){
                    if(mp[it.first]>mp[t]){
                        c++;
                    }
                }
                
                

            }
            
               
                   
                
            
        }
        return c;
        
    }
};