class Solution {
public:
    string removeDuplicates(string s) {
        //create a empty string
        string ans = "";
        int i=0;

        //iterate from starting to last
        while(i<s.length()){
             // first check that ans string ka size 0 se jyada ho
             //and ans string ka last element given string ke current element ke equal ho
             // to use ans string se delete kr do
            if(ans.length() > 0 && ans[ans.length()-1] == s[i]){
                ans.pop_back();
            }
            //agar ans string khali ho ya ans string ka last element 
            //given string ke current element ke equal nhi hai to use ans string me dal do
            else{
                ans.push_back(s[i]);
            }

            i++;
        }
        return ans;
    }
};