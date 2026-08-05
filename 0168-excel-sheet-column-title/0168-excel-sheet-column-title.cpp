class Solution {
public:
    string convertToTitle(int n) {
        string result;
        while (n > 0) {
            n--; // adjust for 1-indexing
            int rem = n % 26;
            result.push_back('A' + rem);
            n /= 26;
        }
        reverse(result.begin(), result.end());
        return result;
    }
};