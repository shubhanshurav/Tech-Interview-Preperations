class Solution {
public:
    string removeOccurrences(string s, string part) {

        // find the starting position of string jha se part ki matching start hoti hai
        int pos = s.find(part);

        //iterate over the string jab part milna band na ho jaye
        while(pos != string::npos){
            //delete the part from the string
            s.erase(pos,part.length());      // Syntax : erase(index_no , no of element you want to delete)

            // update the position
            pos = s.find(part);
        }
        return s;
    }
};