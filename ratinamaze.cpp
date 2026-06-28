class Solution {
  public:
  void rat(vector<vector<int>>&maze,int i,int j,int n,vector<string>&ans,string temp,vector<vector<int>>&vis){
      if(i==n-1 && j==n-1){
          ans.push_back(temp);
          return;
      }
      vis[i][j]=1;
      if(i+1<n && !vis[i+1][j] && maze[i+1][j]==1){
          rat(maze,i+1,j,n,ans,temp+'D',vis);
      }
      if(j-1>=0 && !vis[i][j-1] && maze[i][j-1]==1){
          rat(maze,i,j-1,n,ans,temp+'L',vis);
      }
      if(j+1<n && !vis[i][j+1] && maze[i][j+1]==1){
          rat(maze,i,j+1,n,ans,temp+'R',vis);
      }
      if(i-1>=0 && !vis[i-1][j] && maze[i-1][j]==1){
          rat(maze,i-1,j,n,ans,temp+'U',vis);
      }
      vis[i][j]=0;//backtrack
      
  }
    vector<string> ratInMaze(vector<vector<int>>& maze) {
        int n=maze.size();
        string temp="";
        vector<string>ans;
        if(maze[0][0]==0){
            return ans;
        }
        vector<vector<int>>vis(n,vector<int>(n,0));
        rat(maze,0,0,n,ans,temp,vis);
        return ans;
        
    }
};