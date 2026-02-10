class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        stack<int>st;
        unordered_map<int,int>mp;
        int j=0;
        vector<string>ans;
        for(int s:target){
            mp[s]=j;
            j++;
        }
        for(int i=1;i<=target.back();i++){
            st.push(i);
            ans.push_back("Push");
            if(mp.find(i)==mp.end()){
                st.pop();
                ans.push_back("Pop");
            }
        }
        return ans;
    
        
    }
};