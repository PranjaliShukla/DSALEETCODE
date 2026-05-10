class Solution {
public:
void mergesort(vector<int>&nums,vector<pair<int,int>>&p,int low,int high,vector<int>&ans){
    if (low>=high)return;
    int mid=low+(high-low)/2;
    mergesort(nums,p,low,mid,ans);
    mergesort(nums,p,mid+1,high,ans);
    merge(p,low,mid,high,ans);

}
void merge(vector<pair<int,int>>&p,int low,int mid,int high,vector<int>&ans){
    int i=low;
    int j=mid+1;
    vector<pair<int,int>>temp;
    int count=0;
    while(i<=mid && j<=high){
        if(p[i].first>p[j].first){
            count++;
            temp.push_back(p[j]);
            j++;
        }
        else{
            ans[p[i].second]+=count;
            temp.push_back(p[i]);
            i++;
        }

    }
    while(i<=mid){
        ans[p[i].second]+=count;
        temp.push_back(p[i]);
        i++;
    }
    while(j<=high){
        temp.push_back(p[j]);
        j++;
    }
    for(int i=low;i<=high;i++){
        p[i]=temp[i-low];
    }
}
    vector<int> countSmaller(vector<int>& nums) {
        int n=nums.size();
        vector<pair<int,int>>p;
        vector<int>ans(n,0);
        for(int i=0;i<n;i++){
            p.push_back({nums[i],i});
        }
        mergesort(nums,p,0,n-1,ans);
        return ans;

        
    }
};