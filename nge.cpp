class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int>mp;
        int j=0;
        for(int i:nums2){
            mp[i]=j;
            j++;
        }
        int s2=nums2.size();
        int l=0;
        vector<int>res(nums1.size(),-1);
        for(int i:nums1){
            if(mp.find(i)!=mp.end()){
                int e=mp[i];
                for(int j=e+1;j<s2;j++){
                    if(nums2[j]>i){
                        res[l]=nums2[j];
                       
                        break;
                    }

                }
                l++;

            }
        }
        return res;
        
    }
};