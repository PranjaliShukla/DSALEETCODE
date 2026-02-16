class Solution {
  public:
  void sub(int i,int n, string &res,string &s,vector<string>&ans){
      if(i>=n){
          ans.push_back(res);
          return;

      }
      res.push_back(s[i]);
      sub(i+1,n,res,s,ans);
      res.pop_back();
      sub(i+1,n,res,s,ans);
  }
    vector<string> AllPossibleStrings(string s) {
        int si=s.size();
        vector<string>ans;
        string res="";
        
        sub(0,si,res,s,ans);
        sort(ans.begin(),ans.end());
        return ans;
        
        
        
    }
};