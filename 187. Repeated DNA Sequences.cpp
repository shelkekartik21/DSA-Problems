    
    
    vector<string> findRepeatedDnaSequences(string s) {
        vector<string> ans;
        unordered_map<string, int> mp;
        int n = s.size();
        
        for(int i=0; i+9<n; i++){
            string st = s.substr(i, 10);
            mp[st]++;
        }
        
        for(auto it = mp.begin(); it != mp.end(); it++){
            if(it->second > 1){
                ans.push_back(it->first);
            }
        }
        
        return ans;
    }