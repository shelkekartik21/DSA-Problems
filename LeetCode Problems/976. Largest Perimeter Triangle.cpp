int largestPerimeter(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        
        for(int i=n-3; i >= 0; i--){
            int sumSide = nums[i] + nums[i+1];
            if(sumSide > nums[i+2]){
                return sumSide + nums[i+2];
            }
        }
        
        return 0;
    } 