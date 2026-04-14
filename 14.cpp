class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int s=strs.size();
        string s1=strs[0];
        string ans;
        int ss=strs[0].size();
        int j=0;
        while(j<ss){
            char t=s1[j];
            for(int i=1;i<s;i++){
                if(j>strs[i].size() || strs[i][j]!=t){
                    
                    return ans;

                }
               

                

            }
            ans.push_back(t);
            j++;

        }
        return ans;
        


        
        
    }
};