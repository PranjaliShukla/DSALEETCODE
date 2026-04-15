class Solution {
public:
    int closestTarget(vector<string>& words, string target, int startIndex) {
        int i=startIndex;
        int n=words.size();
        int ans=INT_MAX;
        do{
            if(words[i]==target){
                int dif=abs(i-startIndex);
                ans=min(ans,min(dif,n-dif));
               
            }
            i=(i+1)%n;
        }while(i!=startIndex);
        return ans==INT_MAX? -1:ans;
        
    }
};