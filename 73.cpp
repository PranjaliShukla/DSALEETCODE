class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int r=matrix.size();
        int c=matrix[0].size();
  
      
 
        vector<pair<int,int>>p;
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                if(matrix[i][j]==0){
                    p.push_back({i,j});

                }
            }
        }
        for(auto &it:p){
            int row=it.first;
            int col=it.second;
            for(int j=0;j<c;j++){
                matrix[row][j]=0;
            }
            for(int j=0;j<r;j++){
                matrix[j][col]=0;
            }


        }
         
       

        
        
        
    }
};