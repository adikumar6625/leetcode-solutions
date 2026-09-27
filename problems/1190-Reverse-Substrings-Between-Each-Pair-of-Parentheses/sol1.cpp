// ==========================================================
// 1190. Reverse Substrings Between Each Pair of Parentheses
// Difficulty : Medium
// Language   : C++
// Solution   : #1
// Runtime    : 4 ms (Beats 29%)
// Memory     : 9.5 MB (Beats 58%)
// Link       : https://leetcode.com/problems/reverse-substrings-between-each-pair-of-parentheses/
// ==========================================================

class Solution {
public:
    string reverseParentheses(string s) {
        string st;
        for(char c : s) {
            if(c == ')') {
                string temp;
                while(st.back() != '(') {
                    temp += st.back();
                    st.pop_back();
                }
                st.pop_back();
                st += temp;
            }
            else {
                st += c;
            }
        }
        return st;
    }
};