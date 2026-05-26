class Solution {
public:
    int numberOfSpecialChars(string word) {
        set<char>mp;
       
        for(char t:word){
            mp.insert(t);
           

        }
        int ans=0;
        for(char i='a';i<='z';i++){
            if(mp.find(i)!=mp.end() && mp.find(toupper(i))!=mp.end()){
                ans++;
            }
        }
        return ans;
        
    }
};