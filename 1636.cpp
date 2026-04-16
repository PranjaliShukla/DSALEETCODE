class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
        unordered_map<int,int>mp;
        for(int n:nums){
            mp[n]++;
        }
        vector<pair<int,int>>v(mp.begin(),mp.end());
        sort(v.begin(),v.end(),[](auto &a,auto &b)
        {
            if(a.second==b.second)return a.first>b.first;
            return a.second<b.second;
        });
        vector<int>ans;
        for(auto &it:v){
            ans.insert(ans.end(),it.second,it.first);
        }
        return ans;
        
    }
};