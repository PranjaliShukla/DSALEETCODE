class Solution {
  public:
  void rev(int i,int n,vector<int>&arr){
      if(i>=(n/2))return;
      swap(arr[i],arr[n-i-1]);
      rev(i+1,n,arr);
      
  }
    void reverseArray(vector<int> &arr) {
        rev(0,arr.size(),arr);
        
        
    }
};