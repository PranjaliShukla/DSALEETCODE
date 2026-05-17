class Solution {
public:
    string longestPalindrome(string s) {
        int n=s.size();
        int maxlen=1;
        string ans=s.substr(0,1);
        for(int i=0;i<n;i++){
            //odd length
            int l=i-1;
            int r=i+1;
            while(l>=0 && r<n){
                if(s[l]==s[r]){
                    if(r-l+1>maxlen){
                    ans=s.substr(l,r-l+1);
                    maxlen=r-l+1;
                    }
                    l--;
                    r++;
                }
                else{
                    break;
                }
            }
            int li=i;
            int ri=i+1;
            //even length
            while(li>=0 && ri<n){
                if(s[li]==s[ri]){
                    if(ri-li+1>maxlen){
                        ans=s.substr(li,ri-li+1);
                        maxlen=ri-li+1;
                    }
                    li--;
                    ri++;
                }
                else{
                    break;
                }

            }
        }
        return ans;
        
        
    }
};