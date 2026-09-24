int digitSum(int x) {
    int s = 0;
    while (x > 0) {
        s += x % 10;
        x /= 10;
    }
    return s;
}
class Solution {
public :int smallestIndex(vector<int>& nums) {
    for (int i = 0; i < nums.size(); i++) {
        if (digitSum(nums[i]) == i) {
            return i; // break immediately
        }
    }
    return -1;
}
};