class Solution {
  public:
  void rat(int i,int j,vector<vector<int>>&visited,vector<vector<int>>&maze,int n,string s,vector<string>&ans){
      if(i==n-1 && j==n-1){
          ans.push_back(s);
          return;
          
      }
      if(i+1<n && !visited[i+1][j] && maze[i+1][j]==1){
          visited[i+1][j]=1;
          s.push_back('D');
          rat(i+1,j,visited,maze,n,s,ans);
          s.pop_back();
          visited[i+1][j]=0;
         
          
      }
      if(j-1>=0 && !visited[i][j-1] && maze[i][j-1]==1){
          visited[i][j-1]=1;
          s.push_back('L');
          rat(i,j-1,visited,maze,n,s,ans);
          s.pop_back();
          visited[i][j-1]=0;
      }
       if(j+1<n && !visited[i][j+1] && maze[i][j+1]==1){
          visited[i][j+1]=1;
          s.push_back('R');
          rat(i,j+1,visited,maze,n,s,ans);
          s.pop_back();
          visited[i][j+1]=0;
       }
       if(i-1>=0 && !visited[i-1][j] && maze[i-1][j]==1){
          visited[i-1][j]=1;
          s.push_back('U');
          rat(i-1,j,visited,maze,n,s,ans);
          s.pop_back();
          visited[i-1][j]=0;
       }
                
      
      
      
      
      
  }
    vector<string> ratInMaze(vector<vector<int>>& maze) {
        int n=maze.size();
        vector<string>ans;
        vector<vector<int>>visited(n,vector<int>(n,0));
        if(maze[0][0]==0){
            return ans;
        }
        visited[0][0]=1;
        rat(0,0,visited,maze,n,"",ans);
        return ans;
        
    }
};