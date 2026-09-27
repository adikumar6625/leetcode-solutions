// ==========================================================
// 1807. Evaluate the Bracket Pairs of a String
// Difficulty : Medium
// Language   : C++
// Solution   : #1
// Runtime    : 97 ms (Beats 36%)
// Memory     : 122.8 MB (Beats 47%)
// Link       : https://leetcode.com/problems/evaluate-the-bracket-pairs-of-a-string/
// ==========================================================

class Solution {
public:
    string evaluate(string s, vector<vector<string>>& knowledge) {
        unordered_map<string, string> mp;
        for (auto &k : knowledge)
            mp[k[0]] = k[1];
        string ans, key;
        bool inside = false;
        for (char c : s) {
            if (c == '(') {
                inside = true;
                key = "";
            }
            else if (c == ')') {
                inside = false;

                if (mp.count(key))
                    ans += mp[key];
                else
                    ans += '?';
            }
            else {
                if (inside)
                    key += c;
                else
                    ans += c;
            }
        }
        return ans;
    }
};