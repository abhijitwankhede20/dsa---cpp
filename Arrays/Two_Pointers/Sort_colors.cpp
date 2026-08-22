// LeetCode 75 - Sort Colors
// Approach: Dutch National Flag / Three Pointer
// TC: O(n)
// SC: O(1)

class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n = nums.size();
        int low = 0;
        int mid = 0;
        int high = n - 1;

        while(mid <= high) {
            if(nums[mid] == 0) {
                swap(nums[low], nums[mid]);
                mid++;
                low++;
            }
            else if(nums[mid] == 1) {
                mid++;
            }
            else {
                swap(nums[high], nums[mid]);
                high--;
            }
        }
    }
};
