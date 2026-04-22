class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int s1=matrix.size();
        for(int i=0;i<s1-1;i++){
            for(int j=i+1;j<s1;j++){
                swap(matrix[i][j],matrix[j][i]);
            }
        }
        for(int i=0;i<s1;i++){
            reverse(matrix[i].begin(),matrix[i].end());
        }
        
    }
};