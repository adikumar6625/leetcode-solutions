// ==========================================================
// 167. Two Sum II - Input Array Is Sorted
// Difficulty : Medium
// Language   : C++
// Solution   : #1
// Runtime    : 0 ms (Beats 100%)
// Memory     : 25.7 MB (Beats 10%)
// Link       : https://leetcode.com/problems/two-sum-ii-input-array-is-sorted/
// ==========================================================

class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int start = 0, end = numbers.size() - 1;
        int currSum = 0;

        for(int i = 0;i < numbers.size() - 1;i++){
            currSum = numbers[start]+numbers[end];
            if(currSum == target){
                return {start+1,end+1};
            }
            else if(currSum > target){
                end -= 1;
            }
            else{
                start += 1;
            }
        }
        return {start+1,end+1};
    }
};