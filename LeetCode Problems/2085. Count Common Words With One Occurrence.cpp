
int countWords(vector<string>& words1, vector<string>& words2) {
        int ans = 0;
        unordered_map<string,int> mp1, mp2;
        
        for(auto st : words1){
            mp1[st]++;
        }
        
        for(auto st : words2){
            mp2[st]++;
        }
        
        for(auto it = mp1.begin(); it != mp1.end(); it++){
            if(it->second == 1){
                auto it2 = mp2.find(it->first);
                if(it2 != mp2.end() && it2->second == 1){
                    ans++;
                }
            }
        }
        
        return ans;
    }