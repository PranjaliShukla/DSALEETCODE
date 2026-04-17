class Solution {
public:
void generate(int n,int i,int j,vector<string>&ans,string s)
{
    if(i==n && j==n){
        ans.push_back(s);
    }
    if(i<n){
        generate(n,i+1,j,ans,s+"(");
    }
    if(j<n && i>j){
        generate(n,i,j+1,ans,s+")");
    }
}    vector<string> generateParenthesis(int n) {
    vector<string>ans;
    generate(n,0,0,ans,"");
    return ans;
        
    }
};