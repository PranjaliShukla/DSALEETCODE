#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> ans(2, -1);

        int i = 0, j = nums.size() - 1;
        while (i <= j) {
            int mid1 = i + (j - i) / 2;
            if (nums[mid1] == target) {
                ans[0] = mid1;
                j = mid1 - 1;
            } else if (nums[mid1] < target) {
                i = mid1 + 1;
            } else {
                j = mid1 - 1;
            }
        }

        int k = 0, l = nums.size() - 1;
        while (k <= l) {
            int mid2 = k + (l - k) / 2;
            if (nums[mid2] == target) {
                ans[1] = mid2;
                k = mid2 + 1;
            } else if (nums[mid2] < target) {
                k = mid2 + 1;
            } else {
                l = mid2 - 1;
            }
        }

        return ans;
    }
};
int main() {
    Solution s;
    vector<int> nums = {5,7,7,8,8,10};
    int target = 8;

    vector<int> res = s.searchRange(nums, target);
    cout << res[0] << " " << res[1];
    return 0;
}
