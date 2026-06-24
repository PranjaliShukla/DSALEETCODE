class Solution {
public:

    int myAtoi(string s) {
        int si=s.size();
        int i=0;
        long long ans=0;
        
        while(i<si && s[i]==' '){
            i++;
        }
        int sign=1;
        if(i<si &&(s[i]=='+' || s[i]=='-')){
            if(s[i]=='-'){
                sign=-1;
            }
            i++;
        }
        while(i<si && s[i]=='0'){
            i++;
        }
        while(i<si && isdigit(s[i])){
            ans=ans*10+(s[i]-'0');
            if(sign*ans>INT_MAX){
            return INT_MAX;
        }
           if(sign*ans<INT_MIN){
            return INT_MIN;
        }
            i++;
        }
        
       
        
        return ans*sign;
        


        
        
    }
};