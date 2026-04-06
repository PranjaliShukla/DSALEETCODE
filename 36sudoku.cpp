class Solution {
public:
bool isvalid(int row,int col,char ch,vector<vector<char>>&board){
    for(int i=0;i<9;i++){
        if(board[row][i]==ch)return false;
        if(board[i][col]==ch)return false;
        if(board[3*(row/3)+i/3][3*(col/3)+i%3]==ch)return false;
    }
    return true;
}
    bool isValidSudoku(vector<vector<char>>& board) {
        for(int i=0;i<board.size();i++){
            for(int j=0;j<board[0].size();j++){
                if(board[i][j]!='.'){
                    char ch=board[i][j];
                    board[i][j]='.';
                    if(!isvalid(i,j,ch,board)){
                        return false;

                    }
                    board[i][j]=ch;
                }
            }
        }
        return true;
        
    }
};