class Solution {
public:
    int thirdMax(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int s=nums.size();
        int ans=nums[s-1];
        int c=0;
        for(int i=s-1;i>0;i--){
            if(nums[i]!=nums[i-1]){
                c++;
                if(c==2){
                    ans=nums[i-1];
                    break;
                }
            }

        }
        return ans;
        
    }
};