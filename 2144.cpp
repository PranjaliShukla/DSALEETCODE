class Solution {
public:
    int minimumCost(vector<int>& cost) {
        int n=cost.size();
        sort(cost.begin(),cost.end(),greater<int>());
        int ans=0;
        for(int i=0;i<n;i=i+3){
            ans+=cost[i];
            if(i+1<n){
                ans+=cost[i+1];
            }


            
        }
        return ans;
        
    }
};