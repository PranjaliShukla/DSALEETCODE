class Solution {
public:
    int findNonMinOrMax(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int ans=-1;
        if(n<=2){
            return ans;
        }
        return nums[1];
          
        

        
    }
};