class Solution {
public:
void rotate(vector<vector<int>>&mat){
    int r=mat.size();
    int c=mat[0].size();
    for(int i=0;i<r-1;i++){
        for(int j=i+1;j<c;j++){
            swap(mat[i][j],mat[j][i]);
        }
    }
    for(int i=0;i<r;i++){
        reverse(mat[i].begin(),mat[i].end());
    }

}
bool same(vector<vector<int>>&mat,vector<vector<int>>&target){
    int r=mat.size();
    int c=mat[0].size();
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            if(mat[i][j]!=target[i][j]){
                return false;
            }
        }
    }
    return true;
}

    bool findRotation(vector<vector<int>>& mat, vector<vector<int>>& target) {
        for(int i=0;i<4;i++){
            rotate(mat);
            bool ans=same(mat,target);
            if(ans==true){
                return true;
            }
        }
        return false;

        

        
    }
};