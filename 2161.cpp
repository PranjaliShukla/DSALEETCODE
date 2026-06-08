class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        vector<int>less;
        vector<int>gret;
        int n=nums.size();
        int c=0;
        for(int i=0;i<n;i++){
            if(nums[i]<pivot){
                less.push_back(nums[i]);
            }
            else if(nums[i]>pivot){
                gret.push_back(nums[i]);
            }
            else{
                c++;
            }
        }
        vector<int>ans;
        
        for(int i=0;i<less.size();i++ ){
            ans.push_back(less[i]);
        }
        while(c>0){
            ans.push_back(pivot);
            c--;
        }
        for(int i=0;i<gret.size();i++ ){
            ans.push_back(gret[i]);
        }
        return ans;
        
    }
};