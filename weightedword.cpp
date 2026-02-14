class Solution {
public:
    string mapWordWeights(vector<string>& words, vector<int>& weights) {
        string ans="";
        for(string s:words){
            int sum=0;
            int si=s.size();
            for(char t:s){
                int k=t-'a';
                sum=sum+weights[k];
            }
            sum=sum%26;
           
             ans=ans+char('z'-sum);
            
            
            
        }
        return ans;
        
    }
};