// GFG - First Negative Integer in Every Window of Size K
// Approach: Fixed Size Sliding Window + List
// TC: O(n)
// SC: O(k)

class Solution {
public:
    vector<int> firstNegInt(vector<int>& arr, int k) {
        int n = arr.size();
        int start = 0;
        int end = 0;
        list<int> ls;
        vector<int> result;

        while(end < n) {
            if(arr[end] < 0)
                ls.push_back(arr[end]);

            if((end - start + 1) < k) {
                end++;
            }
            else if((end - start + 1) == k) {
                if(!ls.empty()) {
                    result.push_back(ls.front());

                    if(arr[start] == ls.front()) {
                        ls.pop_front();
                    }
                }
                else {
                    result.push_back(0);
                }

                start++;
                end++;
            }
        }

        return result;
    }
};
