class Solution {
public:
int c=0;
void count(vector<int>&nums,int low,int mid,int high){
    int right=mid+1;
    for(int i=low;i<=mid;i++){
        while(right<=high && nums[i]>2LL*nums[right]){
            right++;
            
            
        }
        c=c+right-(mid+1);
        
    }
}
void merge(vector<int>&nums,int low,int mid,int high){
    vector<int>temp;
    int i=low;
    int j=mid+1;
    while(i<=mid && j<=high){
        if(nums[i]<=nums[j]){
            temp.push_back(nums[i]);
            i++;
        }
        else{
            temp.push_back(nums[j]);
            j++;
        }
    }
    while(i<=mid){
        temp.push_back(nums[i]);
        i++;
    }
    while(j<=high){
        temp.push_back(nums[j]);
        j++;
    }
    for(int i=low;i<=high;i++){
        nums[i]=temp[i-low];
    }

}
void mergesort(vector<int>&nums,int low,int high){
    int mid;
    if(low<high){
        mid=low+(high-low)/2;
        mergesort(nums,low,mid);
        mergesort(nums,mid+1,high);
        count(nums,low,mid,high);
        merge(nums,low,mid,high);
    }
}
    int reversePairs(vector<int>& nums) {
        mergesort(nums,0,nums.size()-1);
        return c;


        
    }
};