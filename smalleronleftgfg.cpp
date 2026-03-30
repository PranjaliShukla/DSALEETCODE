class Solution {
  public:
    vector<int> leftSmaller(vector<int> arr) {
        stack<int>st;
        vector<int>res;
        for(int i=0;i<arr.size();i++){
            while(!st.empty() && st.top()>=arr[i]){
                st.pop();
            }
            if(st.empty()){
                res.push_back(-1);
            }
            else{
            res.push_back(st.top());
            }
            st.push(arr[i]);
            

        }
        return res;
            
        
    }
};