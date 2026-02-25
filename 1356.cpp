class Solution {
public:
    vector<int> sortByBits(vector<int>& arr) {
        unordered_map<int,int>mp;
        for(int i:arr){
            int k=i;
            int c=0;
            while(k>0){
                int l=k%2;
                if(l==1)c++;
                k=k/2;

            }
            mp[i]=c;
        }
        vector<pair<int,int>>p;
        for(int i:arr){
            p.push_back({i,mp[i]});
        }
         
      
                 
        sort(p.begin(),p.end(),[](pair<int,int>a,pair<int,int>b){
            if(a.second==b.second){
                return a.first<b.first;

            }
            return a.second<b.second;
        });
        vector<int>ans;
        for(auto it:p){
            ans.push_back(it.first);
        }
        return ans;

        
    }
};