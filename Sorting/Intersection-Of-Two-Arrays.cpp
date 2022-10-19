vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        
        set<int> a,b;
        
        for(int i : nums1) a.insert(i);
        for(int i : nums2) b.insert(i);
        
        auto i = a.begin(), j = b.begin();
        
        vector<int> ans;
        
        while(i != a.end() && j != b.end()){              
            
            if(*i < *j) ++i;                
            else if(*i > *j) ++j;
            else{
                ans.push_back(*i);
                ++i;
                ++j;
            }  
        }
        
      return ans;
        
    }