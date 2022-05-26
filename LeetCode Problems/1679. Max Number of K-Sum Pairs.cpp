int maxOperations(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        int i = 0, j = n-1, op = 0;
        
        while(i < j){
            int sum = nums[i] + nums[j];
            if(sum < k){
                i++;
            }else if(sum > k){
                j--;
            }else{
                op++;
                i++;
                j--;
            }
        }
        
        return op;
    }