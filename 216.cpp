class Solution {
public:
void comb(vector<int>&temp,vector<vector<int>>&ans,int i,int n,int k){
    if(temp.size()==k && n==0){
        ans.push_back(temp);
        return;
    }
    if(i>9 ||n<0 ){
        return;
    }
    temp.push_back(i);
    comb(temp,ans,i+1,n-i,k);
    temp.pop_back();
    
    comb(temp,ans,i+1,n,k);

}
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<int>temp;
        vector<vector<int>>ans;
        comb(temp,ans,1,n,k);
        return ans;
        
    }
};