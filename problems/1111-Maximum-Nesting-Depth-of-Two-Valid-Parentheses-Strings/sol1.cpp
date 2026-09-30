// ==========================================================
// 1111. Maximum Nesting Depth of Two Valid Parentheses Strings
// Difficulty : Medium
// Language   : C++
// Solution   : #1
// Runtime    : 1 ms (Beats 21%)
// Memory     : 10.6 MB (Beats 19%)
// Link       : https://leetcode.com/problems/maximum-nesting-depth-of-two-valid-parentheses-strings/
// ==========================================================

class Solution {
public:
    vector<int> maxDepthAfterSplit(string seq) {
        vector<int> ans(seq.size());
        int depth = 0;
        for (int i = 0; i < seq.size(); i++) {
            if (seq[i] == '(') {
                depth++;
                ans[i] = depth % 2;
            } else {
                ans[i] = depth % 2;
                depth--;
            }
        }
        return ans;
    }
};