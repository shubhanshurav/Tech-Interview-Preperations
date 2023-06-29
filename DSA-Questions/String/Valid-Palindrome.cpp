/*-----------------------------------------------------------------------------------------------------------------------------------------------------
                        Problem Name : Valid Palindrome
-----------------------------------------------------------------------------------------------------------------------------------------------------

A phrase is a palindrome if, after converting all uppercase letters into lowercase letters and removing all non-alphanumeric characters, it reads the same forward and backward. Alphanumeric characters include letters and numbers.
Given a string s, return true if it is a palindrome, or false otherwise.

-----------------------------------------------------------------------------------------------------------------------------------------------------
Example 1:
-----------------------------------------------------------------------------------------------------------------------------------------------------

Input: s = "A man, a plan, a canal: Panama"
Output: true
Explanation: "amanaplanacanalpanama" is a palindrome.

-----------------------------------------------------------------------------------------------------------------------------------------------------
Example 2:
-----------------------------------------------------------------------------------------------------------------------------------------------------

Input: s = "race a car"
Output: false
Explanation: "raceacar" is not a palindrome.

-----------------------------------------------------------------------------------------------------------------------------------------------------
Example 3:
-----------------------------------------------------------------------------------------------------------------------------------------------------

Input: s = " "
Output: true
Explanation: s is an empty string "" after removing non-alphanumeric characters.
Since an empty string reads the same forward and backward, it is a palindrome.

-----------------------------------------------------------------------------------------------------------------------------------------------------
Constraints:
-----------------------------------------------------------------------------------------------------------------------------------------------------

1 <= s.length <= 2 * 105
s consists only of printable ASCII characters.

*/

/*-----------------------------------------------------------------------------------------------------------------------------------------------------
                                           Solution Code
-----------------------------------------------------------------------------------------------------------------------------------------------------*/

class Solution {
public:
    bool isPalindrome(string s) {
        int i = 0;
        int j = s.length()-1;

        while(i<=j){
            // isalnum() - for checking the given element is alphanumeric or not
            // agar ith element alphanumeric nhi hai to i ko aage bada do
            if(!isalnum(s[i])){i++; continue;}
            // agar jth element alphanumeric nhi hai to j ko piche le aao
            if(!isalnum(s[j])){j--;continue;}
            // tolower() - it converts the uppercase character to lowercase
            // agar ith or jth element equal nhi hai to false return kr do
            if(tolower(s[i]) != tolower(s[j])){
                return false;
            }else{
                i++;
                j--;
            }    
        }
        return true;
    }
};