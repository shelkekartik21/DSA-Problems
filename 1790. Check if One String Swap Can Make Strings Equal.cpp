bool areAlmostEqual(string s1, string s2) {
        if(s1 == s2) return true;
        
        unordered_set<char> st1, st2;
        int count = 0;
        
        for(int i=0; i<s1.size(); i++){
            if(s1[i] != s2[i]){
                count++;
            }
            st1.insert(s1[i]);
            st2.insert(s2[i]);
        }
        
        return (count == 0 || count == 2) && st1 == st2;
    }