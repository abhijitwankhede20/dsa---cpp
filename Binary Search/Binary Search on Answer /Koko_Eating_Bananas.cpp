// LeetCode 875 - Koko Eating Bananas
// Approach: Binary Search on Answer
// TC: O(n log m)
// SC: O(n)

class Solution {
public:
    int findmax(vector<int>& piles) {
        int n = piles.size();
        int maxi = INT_MIN;

        for(int i = 0; i < n; i++) {
            maxi = max(maxi, piles[i]);
        }

        return maxi;
    }

    long long findhours(vector<int> piles, int speed) {
        long long totalhours = 0;

        for(int i = 0; i < piles.size(); i++) {
            totalhours += (1LL * piles[i] + speed - 1) / speed;
        }

        return totalhours;
    }

    int minEatingSpeed(vector<int>& piles, int h) {
        int low = 1, high = findmax(piles);
        int ans = 0;

        while(low <= high) {
            int mid = low + (high - low) / 2;
            long long totalhrs = findhours(piles, mid);

            if(totalhrs <= h) {
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
