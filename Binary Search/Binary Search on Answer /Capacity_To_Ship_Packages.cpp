// LeetCode 1011 - Capacity To Ship Packages Within D Days
// Approach: Binary Search on Answer
// TC: O(n log(sum(weights)))
// SC: O(1)

class Solution {
public:
    int maxi_element(vector<int>& weights) {
        int maxi = INT_MIN;
        for(int i = 0; i < weights.size(); i++) {
            maxi = max(maxi, weights[i]);
        }
        return maxi;
    }

    int sum(vector<int>& weights) {
        int total_sum = 0;
        for(int i = 0; i < weights.size(); i++) {
            total_sum += weights[i];
        }
        return total_sum;
    }

    int finddays(vector<int>& weights, int capacity) {
        int days = 1, load = 0;

        for(int i = 0; i < weights.size(); i++) {
            if(load + weights[i] > capacity) {
                days++;
                load = weights[i];
            }
            else {
                load += weights[i];
            }
        }

        return days;
    }

    int shipWithinDays(vector<int>& weights, int days) {
        int low = maxi_element(weights);
        int high = sum(weights);

        while(low <= high) {
            int mid = low + (high - low) / 2;
            int currday = finddays(weights, mid);

            if(currday <= days) {
                high = mid - 1;
            }
            else {
                low = mid + 1;
            }
        }

        return low;
    }
};
