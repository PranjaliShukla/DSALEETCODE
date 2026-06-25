class Solution {
public:
    int countMajoritySubarrays(vector<int>& nums, int target) {
        int i=0;
        int n=nums.size();
        int ans=0;
        while(i<n){
            int j=i;
            int c=0;
            while(j<n){
                if(nums[j]==target){
                    c++;
                    
                }
                int len=j-i+1;
                if(c>len/2)ans++;
                j++;

            }
            i++;
        }
        return ans;
        
    }
};