/* ----------------------------------------------------------------------------------------------------------------------------------------------------

Problem Name. Longest Common Prefix (Easy)

Write a function to find the longest common prefix string amongst an array of strings.

If there is no common prefix, return an empty string "".

Example 1:

Input: strs = ["flower","flow","flight"]
Output: "fl"
Example 2:

Input: strs = ["dog","racecar","car"]
Output: ""
Explanation: There is no common prefix among the input strings.

Constraints:

1 <= strs.length <= 200
0 <= strs[i].length <= 200
strs[i] consists of only lowercase English letters.

----------------------------------------------------------------------------------------------------------------------------------------------------*/ /*
                                  Longest Common Prefix - Solution
/*----------------------------------------------------------------------------------------------------------------------------------------------------*/

string longestCommonPrefix(vector<string>& strs) {
        
        //for string the final answer
        string ans = "";
        
        if(strs.size() == 0)
            return "";
        
        //It will return the minimum element
        string s = *min_element(strs.begin(), strs.end());
        
        for(int i=0; i<s.size(); i++){
            for(int j=0; j<strs.size(); j++){
                if(s[i] != strs[j][i]){
                    return ans;
                }
            }
            ans.push_back(s[i]);
        }
        
          return ans;     
    }