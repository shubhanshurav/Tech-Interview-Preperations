/*
.....................................................................................................................................
Problem Name: Best Time to Buy and Sell Stock
.....................................................................................................................................

You are given an array prices where prices[i] is the price of a given stock on the ith day.

You want to maximize your profit by choosing a single day to buy one stock and choosing a different day in the future to sell that stock.

Return the maximum profit you can achieve from this transaction. If you cannot achieve any profit, return 0.

.....................................................................................................................................
Example 1:
.....................................................................................................................................
Input: prices = [7,1,5,3,6,4]
Output: 5
Explanation: Buy on day 2 (price = 1) and sell on day 5 (price = 6), profit = 6-1 = 5.
Note that buying on day 2 and selling on day 1 is not allowed because you must buy before you sell.

.....................................................................................................................................
Example 2:
.....................................................................................................................................

Input: prices = [7,6,4,3,1]
Output: 0
Explanation: In this case, no transactions are done and the max profit = 0.

.....................................................................................................................................
Constraints:
.....................................................................................................................................

1 <= prices.length <= 105
0 <= prices[i] <= 104

.....................................................................................................................................
                                Complexity
.....................................................................................................................................
1. Time Complexity: O(N)
2. Space Complexity: O(1)

*/

class Solution {
public:

    int maxProfit(vector<int>& prices) {
        // Initially first element is min element
        int min_num = prices[0];
        // and starting me profit bhi let suppose 0 man liya
        int max_profit  = 0;

        // iterate over all the array
        for(int i=1; i<prices.size(); i++){
            //find diff b/w ith element and min element
            int curr_profit = prices[i] - min_num;
            //calculate which is max from both curr_profit and max_profit
            max_profit = max(max_profit, curr_profit);
            // update min element
            min_num = min(min_num, prices[i]);
        }

        return max_profit;
    }
};