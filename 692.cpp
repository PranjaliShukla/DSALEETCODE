class Solution {
public:
    vector<string> topKFrequent(vector<string>& words, int k) {
        unordered_map<string,int>mp;
        for(string s:words){
            mp[s]++;
        }
        vector<pair<string,int>>p;
        for(auto &it:mp){
            p.push_back({it.first,it.second});
        }
        sort(p.begin(),p.end(),[](auto &a,auto &b){
            if(a.second==b.second){
                return a.first<b.first;
            }
            return a.second>b.second;
        });
        int i=0;
        vector<string>ans;
        while(i<k){
            ans.push_back(p[i].first);
            i++;

        }
        return ans;

        
    }
};