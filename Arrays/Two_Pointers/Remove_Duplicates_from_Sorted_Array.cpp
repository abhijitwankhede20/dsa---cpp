// LeetCode 26 - Remove Duplicates from Sorted Array
// Approach: Two Pointer
// TC: O(n)
// SC: O(1)

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
        int i = 0;

        for(int j = 1; j < n; j++) {
            if(nums[j] != nums[i]) {
                i++;
                nums[i] = nums[j];
            }
        }

        return i + 1;
    }
};
