class Solution {
public:
    bool isAnagram(string s, string t) {

        // <------  Approach - 01 ------------>
        //make a frequency Table array of size 256 
        //and initialize all with 0
        int freqTable[256] = {0};

        //add freq of each char of string s into freqtable
        for(int i=0;i<s.size();i++){
            freqTable[s[i]]++;
        }
        //decreament freq of each char of string t into freqtable
        for(int i=0;i<t.size();i++){
            freqTable[t[i]]--;
        }

        for(int i=0;i<256;i++){
            //agar freq table 0 nhi hai to false return kr do
           if(freqTable[i] != 0)
                return false;
        }

        return true;

        //   <----------- Another way to write this code --------------->
        
     /*   int freqTable1[256] = {0};
        int freqTable2[256] = {0};

        for(int i=0;i<s.size();i++){
            freqTable1[s[i]]++;
        }

        for(int i=0;i<t.size();i++){
            freqTable2[t[i]]++;     
        }

        for(int i=0;i<256;i++){
           if(freqTable1[i]==freqTable2[i]){
                continue;
            } else{
                return false;
            } 
        }
        return true;
    */
    }
};