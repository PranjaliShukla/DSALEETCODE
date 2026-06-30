class Solution {
public:
bool issafe(int i,int j,vector<string>&board,int n){
    int mr=i;
    int mc=j;
    int c=j-1;
    //same row
    while(c>=0){
        if(board[i][c]=='Q'){
            return false;
        }
        c--;
    }
    //upper left diagonal
    int ur=mr;
    int uc=mc;
    while(ur>=0 && uc>=0){
        if(board[ur][uc]=='Q'){
            return false;
        }
        ur--;
        uc--;
    }
    //lower left diagonal
    int urr=mr;
    int urc=mc;
    while(urr<n && urc>=0){
        if(board[urr][urc]=='Q'){
            return false;
        }
        urr++;
        urc--;
    }
    return true;

}
void solve(int col,vector<vector<string>>&ans,vector<string>&board,int n){
    if(col==n){
        ans.push_back(board);
        return;
    }
    for(int i=0;i<n;i++){
        if(issafe(i,col,board,n)){
            board[i][col]='Q';
            solve(col+1,ans,board,n);
            board[i][col]='.';
        }
    }

    
}
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>>ans;
        vector<string>board(n,string(n,'.'));
        
        solve(0,ans,board,n);
        return ans;
        
    }
};