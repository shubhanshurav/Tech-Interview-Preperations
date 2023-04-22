class Solution {
public:
    int lengthOfLastWord(string s) {
        stack<char> st;
        int count=0;
        //store all string element into stack
        for(int i = 0; i < s.length(); i++){
          st.push(s[i]);
        }

        //delete the element - jab tk ki space nhi aa jata
        while(st.top()==' '){
            st.pop();
        }
     
        // iterate over the stack jab stack empty nhi ho jata 
        // and stack ke top me null string nhi aa jati
        while(!st.empty() && st.top()!=' '){
            count++;
            st.pop();
        }
     
     return count;

    }
};
