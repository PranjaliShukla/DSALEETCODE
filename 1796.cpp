class Solution {
public:
    int secondHighest(string s) {
        int n=s.size();
        sort(s.begin(),s.end());
        int maxi=-1;
        int max=-1;
        int an=-1;
        for(int i=n-1;i>=0;i--){
            if(isdigit(s[i])){
                max=s[i];
                an=i;
                break;
            }
        }
        for(int i=an-1;i>=0;i--){
            if(s[i]<max){
                maxi=s[i]-'0';
                break;
            }
        }
        return maxi;

        
    }
};