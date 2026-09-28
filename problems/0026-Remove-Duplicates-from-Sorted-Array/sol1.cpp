// ==========================================================
// 26. Remove Duplicates from Sorted Array
// Difficulty : Easy
// Language   : C++
// Solution   : #1
// Runtime    : 0 ms (Beats 100%)
// Memory     : 22.6 MB (Beats 80%)
// Link       : https://leetcode.com/problems/remove-duplicates-from-sorted-array/
// ==========================================================

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i = 0,j = 1,k=1,n = nums.size();
        while(j < n){
            if(nums[j] == nums[j-1]){
                j++;
            }
            else{
                nums[i+1] = nums[j];
                i++;
                j++;
                k++;
            }
        }
        return k;
    }
};