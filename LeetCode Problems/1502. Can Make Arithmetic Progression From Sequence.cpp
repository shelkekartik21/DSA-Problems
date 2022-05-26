bool canMakeArithmeticProgression(vector<int>& arr) {
        int n = arr.size();
        
        sort(arr.begin(), arr.end());
        
        int diff = arr[1] - arr[0];
        for(int i=n-1; i>0; i--){
            int lDiff = arr[i] - arr[i-1];
            if(lDiff != diff){
                return false;
            }
        }
        
        return true;
    }