class Solution {
public:
    int mirrorDistance(int n) {
        int k=n;
        int ans=0;
        while(k!=0){
            int r=k%10;
            ans=ans*10+r;
            k=k/10;

        }
        return abs(ans-n);

        
    }
};