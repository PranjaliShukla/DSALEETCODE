class Solution {
  public:

  bool sub(int i,int n,vector<int>&arr,int sum,int k){
      
          if(sum==k){
          return true;
          }
          if(i==n){
              return false;
          }
          if(sum>k){
              return false;
          }
      
      
          
      
      
      if(sub(i+1,n,arr,sum+arr[i],k)){
          return true;
      }
      
      
      if(sub(i+1,n,arr,sum,k)){
          return true;
      }
      return false;
      
  }
    bool checkSubsequenceSum(int n, vector<int>& arr, int k) {
        
        
        bool ans=sub(0,n,arr,0,k);
        return ans;
      
        
        
        
    }
};