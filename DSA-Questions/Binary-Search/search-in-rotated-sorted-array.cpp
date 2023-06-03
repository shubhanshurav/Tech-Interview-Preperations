/*

Problem Name: Search in Rotated Sorted Array

There is an integer array nums sorted in ascending order (with distinct values).

Prior to being passed to your function, nums is possibly rotated at an unknown pivot index k (1 <= k < nums.length) such that the resulting array is [nums[k], nums[k+1], ..., nums[n-1], nums[0], nums[1], ..., nums[k-1]] (0-indexed). For example, [0,1,2,4,5,6,7] might be rotated at pivot index 3 and become [4,5,6,7,0,1,2].

Given the array nums after the possible rotation and an integer target, return the index of target if it is in nums, or -1 if it is not in nums.

You must write an algorithm with O(log n) runtime complexity.


Example 1:

Input: nums = [4,5,6,7,0,1,2], target = 0
Output: 4
Example 2:

Input: nums = [4,5,6,7,0,1,2], target = 3
Output: -1
Example 3:

Input: nums = [1], target = 0
Output: -1

*/

/*

Time Complexity: O(N)
Space Complexity: O(1)

*/

class Solution {
public:
    int search(vector<int>& nums, int target) {

    // Using Binary Search
    
        int n = nums.size();
        int first = 0, last = n-1;

        while(first <= last){
            int mid = (last-first)/2+first;
            // if mid element and target are equal than return mid
            if(nums[mid] == target) return mid;

            //for check target in left half array
            if(nums[first] <= nums[mid]){
                //Target jo hai vo ya to first element se bda hoga ya mid/last element se chhota hoga
                if(target >= nums[first] && target < nums[mid])
                    last = mid - 1;
                else
                    first = mid + 1;
            }
            //for check target in right half array
            else{
                //Target jo hai vo ya to first/mid element se bda hoga ya last element se chhota hoga
                if(target > nums[mid] && target <= nums[last])
                    first = mid + 1;
                else
                    last = mid - 1;        
            }
        }  

       // otherwise return -1
        return -1;         
    }
};