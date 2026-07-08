class Solution {
public:
    int mySqrt(int x) {
        if (x == 0) return 0;
    
    int low = 1, high = x;
    int ans = 0;
    
    while (low <= high) {
        long long mid = low + (high - low) / 2; // 'long long' prevents overflow
        
        if (mid * mid == x) {
            return mid;
        } else if (mid * mid < x) {
            ans = mid;      // Store closest integer found so far
            low = mid + 1;  // Try to find a larger one
        } else {
            high = mid - 1;
        }
    }
    return ans;
    }
};