class Solution {
public:
void generate(int i,int j,int n,vector<string>&ans,string s){
    if(i==n && j==n){
        ans.push_back(s);
    }
    if(i<n){
    generate(i+1,j,n,ans,s+"(");}
    if(j<i){
    generate(i,j+1,n,ans,s+")");}



}
    vector<string> generateParenthesis(int n) {
        vector<string>ans;
        generate(0,0,n,ans,"");
        return ans;
        
    }
};