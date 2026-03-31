class Solution {
public:
    int trap(vector<int>& height) {
        int s=height.size();
        vector<int>pm(s);
        pm[0]=height[0];
        for(int i=1;i<s;i++){
            pm[i]=max(height[i],pm[i-1]);
        }
        vector<int>sm(s);
        sm[s-1]=height[s-1];
        for(int i=s-2;i>=0;i--){
            sm[i]=max(height[i],sm[i+1]);
        }
        int total=0;
        for(int i=0;i<s;i++){
            int lm=pm[i];
            int rm=sm[i];
            if(height[i]<lm && height[i]<rm){
                total+=min(lm,rm)-height[i];
            }
        }
        return total;
        
    }
};