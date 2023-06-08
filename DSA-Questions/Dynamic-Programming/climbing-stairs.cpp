/*

Problem Name: Climbing Stairs
You are climbing a staircase. It takes n steps to reach the top.

Each time you can either climb 1 or 2 steps. In how many distinct ways can you climb to the top?

Example 1:

Input: n = 2
Output: 2
Explanation: There are two ways to climb to the top.
1. 1 step + 1 step
2. 2 steps
Example 2:

Input: n = 3
Output: 3
Explanation: There are three ways to climb to the top.
1. 1 step + 1 step + 1 step
2. 1 step + 2 steps
3. 2 steps + 1 step

Constraints:
1 <= n <= 45

<----------------------->  Complexity  <-------------------->

1. Time Complexity: O(N)
2. Space Complexity: O(N)

*/

class Solution {
public:
    int climbStairs(int n) {
        //using dp---> [ This code for only if k=1steps or 3 steps]
        int dp[n+1];
        dp[0] = 1;
        dp[1] = 1;

        for(int i=2;i<=n;i++){
            dp[i] = dp[i-1]+dp[i-2];
        }

        return dp[n];
    }
};


/*

class Solution {
public:
    int climbStairs(int n) {
        //using dp---> [ This code any k=1steps 2, 3 , 4......., n steps]
        int k = 2;
        int dp[n+1];
        dp[0] = 1;

        for(int i=1;i<=n;i++){
            int ans = 0;
            for(int jump=1;jump<=k;jump++){
                if(i-jump>=0){
                    ans += dp[i-jump];
                }
            }
            dp[i] = ans;
        }

        return dp[n];
    }
};


<------------> Recursion Solution <------------>
// this solution gives TLE on leetcode

class Solution {
public:
    int countSteps(int n) {

        // Base Case
        if(n==0 || n==1) return 1;

        return countSteps(n-1) + countSteps(n-2);
    }

    int climbStairs(int n){

        return countSteps(n);
    }
};


*/
