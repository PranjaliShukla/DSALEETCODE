class Solution {
public:
    int maxDistance(vector<int>& colors) {
        int i=0;
        int j=colors.size()-1;
        int maxi=-1;
        while(i<j){
            if(colors[i]!=colors[j]){
                maxi=j-i;
                break;

            }
            else{
                j--;
            }
        }
        i=0;
        j=colors.size()-1;
        while(i<j){
            if(colors[i]!=colors[j]){
                maxi=max(maxi,j-i);
                break;
                
            }
            else{
                i++;
            }
        }

        return maxi;

        
    }
};