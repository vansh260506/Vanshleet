class Solution {
public:
    int missingInteger(vector<int>& nums) {
     int n = nums.size();
        
        // Step 1: Find the longest sequential prefix sum
        int total = nums[0];
        int i = 1;
        while (i < n && nums[i] == nums[i - 1] + 1) {
            total += nums[i];
            i++;
        }
        
        // Step 2: Store all numbers in a set for O(1) lookup
        unordered_set<int> seen(nums.begin(), nums.end());
        
        // Step 3: Find the smallest missing integer >= total
        int ans = total;
        while (seen.count(ans)) {
            ans++;
        }
        return ans;
    }
};