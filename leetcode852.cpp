class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int s=arr.size();
        int max;
        for(int i=0;i<s-1;i++){
            max=-1;
            int c=0;
            for(int j=i+1;j<s;j++){
                if(arr[i]>=arr[j]){
                    max=i;
                    c=1;
                }
                else{
                    break;
                }

            }
            if(c==1){
                break;
            }

        }
        return max;

        
    }
};