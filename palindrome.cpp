class Solution {
  public:
  bool check(string &s,int i,int n){
      if(i>=n/2) return true;
      if(s[i]!=s[n-i-1]){
          return false;
      }
      check(s,i+1,n);
      
      
  }
    bool isPalindrome(string& s) {
        bool ans=check(s,0,s.size());
        return ans;
        
        
    }
};