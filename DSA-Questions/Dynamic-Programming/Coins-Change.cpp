/*

Problem Name: Coin Change [Medium Level]

You are given an integer array coins representing coins of different denominations and an integer amount representing a total amount of money.

Return the fewest number of coins that you need to make up that amount. If that amount of money cannot be made up by any combination of the coins, return -1.

You may assume that you have an infinite number of each kind of coin.

Example 1:

Input: coins = [1,2,5], amount = 11
Output: 3
Explanation: 11 = 5 + 5 + 1
Example 2:

Input: coins = [2], amount = 3
Output: -1
Example 3:

Input: coins = [1], amount = 0
Output: 0


*/


// <------------ Solution ------------->

class Solution {
public:
    int coinChange(vector<int>& coins, int amount){ 
    vector<int> A(amount+1, amount+1);
    A[0] = 0;
    for (int coin : coins) {
        for (int i = coin; i <= amount; i++) {
            A[i] = min(A[i], A[i - coin] + 1);
        }
    }
    return A[amount] > amount ? -1 : A[amount];
   }
};