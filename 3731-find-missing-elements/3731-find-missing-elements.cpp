class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        std::sort(nums.begin(), nums.end());
        std::vector<int> result;

        // Using standard int instead of size_t here
        int n = nums.size();
        for (int i = 0; i < n - 1; ++i) {
            for (int val = nums[i] + 1; val < nums[i + 1]; ++val) {
                result.push_back(val);
            }
        }

        return result;
    }
};