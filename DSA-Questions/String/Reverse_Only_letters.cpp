class Solution {
public:
    string reverseOnlyLetters(string s) {

// Using two pointer approach
        int low = 0, high = s.size()-1;

        while(low < high){
            // isalpha -> it is a simple c++ function 
            // that is returns the whether given char. is alphabet or not
            if(isalpha(s[low]) && isalpha(s[high])){
                // if both character low & high is alphabet than swap
                //and increament low and decreament high 
                swap(s[low], s[high]);
                low++;
                high--;
            }// if low character is not alphabet than increament low
            else if(!isalpha(s[low])){
                low++;
            }//else decrement high
            else{
                high--;
            }
        } 
        return s;   
    }
};