class Solution {
  public:
    vector<int> findUnion(vector<int>& a, vector<int>& b) {
        set<int>ans;
        for(int i:a){
            ans.insert(i);
        }
        for(int j:b){
            ans.insert(j);
        }
        return vector<int>(ans.begin(),ans.end());
    }
};