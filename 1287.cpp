class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
        int s1=arr.size();
        int perc=(s1*25)/100;
        unordered_map<int,int>mp;
        for(int i:arr){
            mp[i]++;
        }
        int ans;
        for(auto &it:mp){
            if(it.second>perc){
                ans= it.first;
                break;
            }
        }
        return ans;
        
    }
};