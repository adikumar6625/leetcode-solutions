// ==========================================================
// 1614. Maximum Nesting Depth of the Parentheses
// Difficulty : Easy
// Language   : C++
// Solution   : #1
// Runtime    : 0 ms (Beats 100%)
// Memory     : 8.4 MB (Beats 24%)
// Link       : https://leetcode.com/problems/maximum-nesting-depth-of-the-parentheses/
// ==========================================================

class Solution {
public:
    int maxDepth(string s) {
        int depth = 0, maxDepth = 0;
        for (char c : s) {
            if (c == '(') {
                depth++;
                maxDepth = max(maxDepth, depth);
            } 
            else if (c == ')') {
                depth--;
            }
        }
        return maxDepth;
    }
};