// GFG - Maximum Sum Subarray of Size K
// Approach: Fixed Size Sliding Window
// TC: O(n)
// SC: O(1)

class Solution {
public:
    int maximumSumSubarray(vector<int>& arr, int k) {
        int n = arr.size();
        int start = 0;
        int end = 0;
        int sum = 0;
        int maxsum = INT_MIN;

        while(end < n) {
            sum += arr[end];

            if((end - start + 1) < k) {
                end++;
            }
            else if((end - start + 1) == k) {
                maxsum = max(maxsum, sum);
                sum -= arr[start];
                start++;
                end++;
            }
        }

        return maxsum;
    }
};
