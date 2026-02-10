class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        int n=tokens.size();
        stack<int>st;
        for(string s:tokens){
            if(s!="+" && s!="-" && s!="/" && s!="*"){
                st.push(stoi(s));
            }
            else{
                int k1=st.top();
                st.pop();
                int k2=st.top();
                st.pop();
                int ans;
                if(s=="+"){
                    ans=k2+k1;

                }
                else if(s=="-"){
                    ans=k2-k1;
                }
                else if(s=="/"){
                    ans=k2/k1;
                }
                else{
                    ans=k2*k1;
                }
                st.push(ans);
            
            }
        }
        return st.top();




        
    }
};