class Solution {
public:
    int myAtoi(string s) {
        int si=s.size();
        int j=0;
        while(j<si && s[j]==' ' ){
            j++;
        }
        int sign=1;
        if(j<si && s[j]=='-'){
            sign=-1;
            j++;

        }
        else if(j<si && s[j]=='+'){
            j++;
        }
        while(j<si && s[j]=='0'){
            j++;
        }
        long long an=0;

        for(int i=j;i<si;i++){
            if(isdigit(s[i])){
                int digit=s[i]-'0';
                if(an>INT_MAX/10 || (an==INT_MAX/10 && digit>7)){
                    return sign==1?INT_MAX:INT_MIN;
                }
                an=an*10+(s[i]-'0');

            }
            else{
                break;
            }



        }
        if(sign*an>INT_MAX){
            return INT_MAX;
        }
        else if(sign*an<INT_MIN){
            return INT_MIN;
        }
        return sign*an;
        
    }
};