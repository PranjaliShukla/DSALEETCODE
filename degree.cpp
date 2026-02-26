class Solution {
public:
    int findShortestSubArray(vector<int>& nums) {
        unordered_map<int,int>mp;
        for(int num:nums){
            mp[num]++;
        }
        int c=0;
        for(auto &it:mp){
            c=max(c,it.second);
        }
        int mini=INT_MAX;
        for(auto&it:mp){
            if(c==it.second){
        int i=0;
        int j=nums.size()-1;
        int ans=0;
        int n=it.first;
        while(i<=j){
            if(nums[i]==n && nums[j]==n){
                ans=j-i+1;
                mini=min(mini,ans);
                break;
                
            }
            else if(nums[i]!=n && nums[j]==n){
                i++;
            }
            else if(nums[j]!=n && nums[i]==n){
                j--;
            }
            else{
                i++;
                j--;
            }
        }
            }
        }
        return mini;   
    }
};