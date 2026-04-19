class Solution {
public:
    int maxDistance(vector<int>& nums1, vector<int>& nums2) {
        int n=nums1.size();
        int dis=0;
        for(int i=0;i<n;i++){
            int l=0;
            int m=nums2.size()-1;
            while(l<=m){
                int mid=l+(m-l)/2;
                if(nums1[i]<=nums2[mid]){
                    dis=max(dis,mid-i);
                    l=mid+1;
                }
                else{
                    m=mid-1;
                }
            }
        }
        return dis;

        
    }
};