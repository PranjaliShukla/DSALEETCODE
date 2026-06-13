class Solution {
public:
    string mapWordWeights(vector<string>& words, vector<int>& weights) {
        int n=words.size();
        string s;
        for(int i=0;i<n;i++){
            int x=0;
            int si=words[i].size();
            for(int j=0;j<si;j++){
                int y=words[i][j];
                x=x+weights[y-97];
            }
            int an=x%26;
            s=s+char(122-an);

        }
        return s;
        
    }
};