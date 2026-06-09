class Solution {
public:
    int sumSubarrayMins(vector<int>& arr) {
        int n=arr.size();
        vector<int>pse(n,-1);
        vector<int>nse(n,n);
        stack<int>st1;
        for(int i=n-1;i>=0;i--){
            while(!st1.empty() && arr[st1.top()]>=arr[i]){
                st1.pop();
            }
            if(!st1.empty()){

            
            nse[i]=st1.top();}
            st1.push(i);
        }
        stack<int>st2;
        for(int i=0;i<n;i++){
            while(!st2.empty() && arr[st2.top()]>arr[i]){
                st2.pop();
            }
            if(!st2.empty()){
                pse[i]=st2.top();
            }
            st2.push(i);
        }
        const int mod=1000000007;
        long long sum=0;
        for(int i=0;i<n;i++){
            long long l=i-pse[i];
            long long r=nse[i]-i;
            sum=(sum+arr[i]*(r*l))%mod;
        }
        return (int)sum;

  
        
    }
};