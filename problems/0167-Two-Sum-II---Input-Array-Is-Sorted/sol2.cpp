// ==========================================================
// 167. Two Sum II - Input Array Is Sorted
// Difficulty : Medium
// Language   : C++
// Solution   : #2
// Runtime    : 0 ms (Beats 100%)
// Memory     : 25.7 MB (Beats 10%)
// Link       : https://leetcode.com/problems/two-sum-ii-input-array-is-sorted/
// ==========================================================

class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int i = 0, j = numbers.size() - 1;
        int currSum = 0;
        vector<int> ans;
        while(i < j){
            currSum = numbers[i] + numbers[j];
            if(currSum == target){
                ans.push_back(i+1);
                ans.push_back(j+1);
                return ans;
            }
            else if(currSum > target){
                j--;
            }
            else{
                i++;
            }
        }
        return ans;
    }
};