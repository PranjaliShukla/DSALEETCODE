class Solution {
public:
void valid(int n,int open,int close,string s,vector<string>&result){

    if(open==n && close==n) {
        result.push_back(s);
        return;
    }
    if(open<n){
    
        valid(n,open+1,close,s+"(",result);

    }
    if(open>close){
        
        valid(n,open,close+1,s+")",result);

    }
   




}
    vector<string> generateParenthesis(int n) {
        vector<string>result;
        string s="";

       valid(n,0,0,s,result);
       return result;
        

        
    }
};