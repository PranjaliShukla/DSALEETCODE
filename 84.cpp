class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int s=heights.size();

        vector<int>nsl(s,-1);
        vector<int>nsr(s,s);
        stack<int>st1;
        for(int i=0;i<s;i++){
            while(!st1.empty() && heights[st1.top()]>=heights[i]){
                st1.pop();
            }
            if(!st1.empty()){
                nsl[i]=st1.top();
            }
            st1.push(i);
        }
        stack<int>st2;
        for(int i=s-1;i>=0;i--){
            while(!st2.empty() && heights[st2.top()]>=heights[i]){
                st2.pop();
            }
            if(!st2.empty()){
                nsr[i]=st2.top();
            }
            st2.push(i);
        }
        int ans=INT_MIN;
        for(int i=0;i<s;i++){
            int area=heights[i]*(nsr[i]-nsl[i]-1);
            ans=max(area,ans);

        }
        return ans;

        
    }
};