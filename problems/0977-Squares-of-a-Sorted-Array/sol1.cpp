// ==========================================================
// 977. Squares of a Sorted Array
// Difficulty : Easy
// Language   : C++
// Solution   : #1
// Runtime    : 14 ms (Beats 8%)
// Memory     : 31.1 MB (Beats 28%)
// Link       : https://leetcode.com/problems/squares-of-a-sorted-array/
// ==========================================================

class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> res;
        for (int i = 0; i < nums.size(); i++) {
            long long mul = nums[i] * nums[i];
            res.push_back(mul);
        }
        sort(res.begin(), res.end());
        return res;
    }
};