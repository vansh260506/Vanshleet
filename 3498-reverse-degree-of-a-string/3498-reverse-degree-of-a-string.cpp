class Solution {
public:
    int reverseDegree(string s) {
        int n = s.length();
        long long ans = 0;
        for (int i = 1; i <= n; ++i) {
            // reverse alphabet index: 'a' = 26, 'z' = 1
            int revIndex = 26 - (s[i - 1] - 'a');
            ans += i * revIndex;
        }
        return ans;
        }
};