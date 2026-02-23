class Solution {
  public:
    int missingNum(vector<int>& arr) {
       int n=arr.size();
       int x=0;
       for(int i=1;i<=n+1;i++){
           x=x^i;
           
       }
       for(int j:arr){
           x=x^j;
       }
       return x;
        
    }
};