// LeetCode 11 - Container With Most Water
// Approach: Two Pointer
// TC: O(n)
// SC: O(1)

class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();
        int left = 0;
        int right = n - 1;
        int maxwater = 0;

        while(left < right) {
            int width = right - left;
            int ht = min(height[left], height[right]);
            int currentwater = width * ht;
            maxwater = max(maxwater, currentwater);

            height[left] < height[right] ? left++ : right--;
        }

        return maxwater;
    }
};
