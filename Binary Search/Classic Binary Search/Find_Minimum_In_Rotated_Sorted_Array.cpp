// LeetCode 153 - Find Minimum in Rotated Sorted Array
// Approach: Modified Binary Search
// TC: O(log n)
// SC: O(1)

class Solution {
public:
    int findMin(vector<int>& nums) {
        int n = nums.size();
        int st = 0;
        int end = n - 1;

        while(st < end) {
            int mid = st + (end - st) / 2;

            if(nums[mid] > nums[end]) {
                st = mid + 1;
            }
            else {
                end = mid;
            }
        }

        return nums[st];
    }
};
