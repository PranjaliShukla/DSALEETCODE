class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        // vector<pair<int,int>>h;
        // for(int i=0;i<heights.size();i++){
        //     h.push_back({i,heights[i]});
        // }
        // sort(h.begin(),h.end(),[](auto &a,auto &b){
        //     return a.second>b.second;
        // });
        // vector<string>ans;
        // for(int i=0;i<h.size();i++){
        //     ans.push_back(names[h[i].first]);
        // }
        // return ans;
        vector<pair<int,string>>p;
        for(int i=0;i<heights.size();i++){
            p.push_back({heights[i],names[i]});
        }
        sort(p.begin(),p.end(),greater<>());
        vector<string>ans;
        for(auto &h:p){
            ans.push_back(h.second);
        }
        return ans;
        
    }
};