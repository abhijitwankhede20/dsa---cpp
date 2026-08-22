// LeetCode 643 - Maximum Average Subarray I
// Approach: Fixed Size Sliding Window
// TC: O(n)
// SC: O(1)

class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int n = nums.size();
        int start = 0;
        int end = 0;
        double sum = 0;
        double maxaverage = INT_MIN;

        while(end < n) {
            sum += nums[end];

            if((end - start + 1) < k) {
                end++;
            }
            else if((end - start + 1) == k) {
                maxaverage = max(maxaverage, sum / k);
                sum -= nums[start];
                start++;
                end++;
            }
        }

        return maxaverage;
    }
};
