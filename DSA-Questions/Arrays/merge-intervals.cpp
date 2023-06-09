/*

Probleme Name: Merge Intervals

Given an array of intervals where intervals[i] = [starti, endi], merge all overlapping intervals, and return an array of the non-overlapping intervals that cover all the intervals in the input.

Example 1:

Input: intervals = [[1,3],[2,6],[8,10],[15,18]]
Output: [[1,6],[8,10],[15,18]]
Explanation: Since intervals [1,3] and [2,6] overlap, merge them into [1,6].
Example 2:

Input: intervals = [[1,4],[4,5]]
Output: [[1,5]]
Explanation: Intervals [1,4] and [4,5] are considered overlapping.

Constraints:

1 <= intervals.length <= 104
intervals[i].length == 2
0 <= starti <= endi <= 104

<-------------> Complexity <---------------->

1. Time Complexity: O(NlogN)+O(N)
2. Space Complexity: O(N) in worst case

*/

class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>> mergeIntervals;
        if(intervals.size() == 0) return mergeIntervals;

        sort(intervals.begin(),intervals.end());

        vector<int> tempIntervals = intervals[0];

        for(auto it:intervals){
            if(it[0] <= tempIntervals[1]){
                tempIntervals[1] = max(it[1], tempIntervals[1]);
            }else{
                mergeIntervals.push_back(tempIntervals);
                tempIntervals = it;
            }
        }
        mergeIntervals.push_back(tempIntervals);
        return mergeIntervals;
    }
};