class Solution {
public:
    int trap(vector<int>& height) {
        int l=0;
        int s=height.size();
        int r=s-1;
        int lm=0,rm=0,total=0;
        while(l<r){
            if(height[l]<=height[r]){
                if(height[l]<lm){
                    total+=lm-height[l];
                   
                }
                else{
                    lm=height[l];
                }
                l++;
            }
            else{
                if(height[r]<rm){
                    total+=rm-height[r];
                   
                }
                else{
                    rm=height[r];
                }
                r--;
            }
        }
        return total;
        
    }
};