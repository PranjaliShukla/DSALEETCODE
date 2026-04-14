class Solution {
public:
    string largestOddNumber(string num) {
        int n=num.size();
        int index=-1;
        string si="";
        for(int i=n-1;i>=0;i--){
            int k=num[i]-'0';
            if(k%2!=0){
                index=i;
                break;
            }
        }
        if(index==-1){
            return si;
        }
        else{
            int j=0;
            int ans=0;
            for(int i=0;i<=index;i++){
                si.push_back(num[i]);
                


            }
        }
        return si;
        
        
        
    }
};