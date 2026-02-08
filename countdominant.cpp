class Solution {
public:
    int dominantIndices(vector<int>& nums) {
        int n=nums.size();
        int i=0;
        int count=0;
        while(i<n-1){
            int j=i+1;
            int average=0;
            int sum=0;
            int k=0;
            while(j<n){
                sum=sum+nums[j];
                j++;
                k++;
                
            }
            if(nums[i]>(sum/k)){
                count++;
            }
            i++;
        }
        return count;
        
    }
};