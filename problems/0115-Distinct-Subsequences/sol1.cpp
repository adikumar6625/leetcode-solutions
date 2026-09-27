// ==========================================================
// 115. Distinct Subsequences
// Difficulty : Hard
// Language   : C++
// Solution   : #1
// Runtime    : 31 ms (Beats 45%)
// Memory     : 27.1 MB (Beats 48%)
// Link       : https://leetcode.com/problems/distinct-subsequences/
// ==========================================================

class Solution {
public:
    int numDistinct(string s, string t) {
        int n = s.size(), m = t.size();
        vector<vector<int>> dp(n + 1, vector<int>(m + 1));
        for (int i = 0; i <= n; i++)
            dp[i][0] = 1;
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= m; j++) {
                dp[i][j] = dp[i - 1][j];
                if (s[i - 1] == t[j - 1]) {
                    dp[i][j] = min(
                        (long long)INT_MAX,
                        (long long)dp[i][j] + dp[i - 1][j - 1]
                    );
                }
            }
        }
        return dp[n][m];
    }
};