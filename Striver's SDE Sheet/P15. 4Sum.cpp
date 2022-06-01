vector<vector<int>> fourSum(vector<int> &nums, int target)
{
    vector<vector<int>> ans;
    int n = nums.size();
    if (n == 0)
        return ans;
    sort(nums.begin(), nums.end());
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            int target1 = target - nums[j] - nums[i];
            int l = j + 1, r = n - 1;
            while (l < r)
            {
                int sum = nums[l] + nums[r];
                if (sum < target1)
                    l++;
                else if (sum > target1)
                    r--;
                else
                {
                    vector<int> quad(4, 0);
                    quad[0] = nums[i];
                    quad[1] = nums[j];
                    quad[2] = nums[l];
                    quad[3] = nums[r];
                    ans.push_back(quad);

                    while (l < r && nums[l] == quad[2])
                        l++;
                    while (l < r && nums[r] == quad[3])
                        r--;
                }
            }
            while (j + 1 < n && nums[j + 1] == nums[j])
                j++;
        }
        while (i + 1 < n && nums[i + 1] == nums[i])
            i++;
    }

    return ans;
}