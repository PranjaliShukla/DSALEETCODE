class Solution {
  public:
  void sub(int i,int j,int n,vector<vector<int>>&visited,vector<vector<int>>&maze,string move,vector<string>&ans){
      if(i==n-1 && j==n-1){
          ans.push_back(move);
          return;
      }
      //down
      if(i+1<n && !visited[i+1][j] && maze[i+1][j]==1){
          visited[i][j]=1;
          sub(i+1,j,n,visited,maze,move+"D",ans);
          visited[i][j]=0;
          
      }
      //left
      if(j-1>=0 && !visited[i][j-1] && maze[i][j-1]==1){
          visited[i][j]=1;
          sub(i,j-1,n,visited,maze,move+"L",ans);
          visited[i][j]=0;
      }
      //right
      if(j+1<n && !visited[i][j+1] && maze[i][j+1]==1){
          visited[i][j]=1;
          sub(i,j+1,n,visited,maze,move+"R",ans);
          visited[i][j]=0;
      }
      //up
      if(i-1>=0 && !visited[i-1][j] && maze[i-1][j]==1){
          visited[i][j]=1;
          sub(i-1,j,n,visited,maze,move+"U",ans);
          visited[i][j]=0;
      }
  }
    vector<string> ratInMaze(vector<vector<int>>& maze) {
        int n=maze.size();
        vector<vector<int>>visited(n,vector<int>(n,0));
        string move="";
        vector<string>ans;
       
        sub(0,0,n,visited,maze,"",ans);
        return ans;
        
       
        
        
        
    }
};