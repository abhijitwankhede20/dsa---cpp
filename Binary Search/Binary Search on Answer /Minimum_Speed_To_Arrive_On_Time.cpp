// LeetCode 1870 - Minimum Speed to Arrive on Time
// Approach: Binary Search on Answer
// TC: O(n log 10^7)
// SC: O(1)

class Solution {
public:
    double findhrs(vector<int>& dist, int speed) {
        double totalhrs = 0;

        for(int i = 0; i < dist.size() - 1; i++) {
            totalhrs += ceil((double)dist[i] / speed);
        }

        totalhrs += (double)dist.back() / speed;

        return totalhrs;
    }

    int minSpeedOnTime(vector<int>& dist, double hour) {
        int low = 1;
        int high = 10000000;
        int ans = -1;

        while(low <= high) {
            int mid = low + (high - low) / 2;
            double hrs = findhrs(dist, mid);

            if(hrs <= hour) {
                ans = mid;
                high = mid - 1;
            }
            else {
                low = mid + 1;
            }
        }

        return ans;
    }
};
