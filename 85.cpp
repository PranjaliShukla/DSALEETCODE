class Solution {
public:
int maxrec(vector<int>&mat){
    int m=mat.size();
    stack<int>st1;
    vector<int>nsl(m,-1);
    vector<int>nsr(m,m);
    for(int i=0;i<m;i++){
        while(!st1.empty() && mat[st1.top()]>=mat[i]){st1.pop();}
        if(!st1.empty()){
            nsl[i]=st1.top();
        }
        st1.push(i);
    }
    stack<int>st2;
     for(int i=m-1;i>=0;i--){
        while(!st2.empty() && mat[st2.top()]>=mat[i]){st2.pop();}
        if(!st2.empty()){
            nsr[i]=st2.top();
        }
        st2.push(i);
    }
    int maxa=INT_MIN;
    for(int i=0;i<m;i++){
        int area=mat[i]*(nsr[i]-nsl[i]-1);
        maxa=max(maxa,area);

    }
    return maxa;

}
    int maximalRectangle(vector<vector<char>>& matrix) {
        int r=matrix.size();
        int c=matrix[0].size();
        vector<vector<int>>pre(r,vector<int>(c,0));
        for(int i=0;i<c;i++){
            for(int j=0;j<r;j++){
                if(matrix[j][i] == '1'){
            if(j == 0)
                pre[j][i] = 1;
            else
                pre[j][i] = pre[j-1][i] + 1;
        }
        else{
            pre[j][i] = 0;
        }
            }
        }
        int ar=INT_MIN;
        for(int i=0;i<r;i++){
            int are=maxrec(pre[i]);
            ar=max(ar,are);
        }
        return ar;


        
    }
};