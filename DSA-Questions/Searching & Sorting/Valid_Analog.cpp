class Solution {
public:
    bool isAnagram(string s, string t) {
          
        //sort the both strings  
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());

        if(s.size() == t.size()){
            for(int i=0;i<s.size();i++){
                if(s[i] == t[i]){
                    continue;
                }else{
                    return false;
                }
            }
        }else{
            return false;
        }

    return true;
    }
};