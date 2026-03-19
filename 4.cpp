class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int s1=nums1.size();
        int s2=nums2.size();
        int i=0;
        int j=0;
        double median;
        vector<int>finali;
        while(i<s1 && j<s2){
            if(nums1[i]<nums2[j]){
                finali.push_back(nums1[i]);
                i++;

            }
            else{
                finali.push_back(nums2[j]);
                j++;
            }
        }
        while(i<s1){
            finali.push_back(nums1[i]);
            i++;

        }
        while(j<s2){
            finali.push_back(nums2[j]);
            j++;
        }
        int total=s1+s2;
        if(total%2==0){
            median=(finali[(total/2)-1]+finali[total/2])/2.0;

        }
        else{
            median=finali[(total/2)];
        }
        return median;
        
    }
};