int maximumUniqueSubarray(vector<int> &nums)
{
    int n = nums.size();
    unordered_map<int, int> mp;

    int ans = 0, left = 0, sum = 0;

    for (int i = 0; i < n; i++)
    {
        if (mp.find(nums[i]) != mp.end())
        {
            int idx = mp[nums[i]];
            while (left <= idx)
            {
                mp.erase(nums[left]);
                sum -= nums[left];
                left++;
            }
        }
        mp[nums[i]] = i;
        sum += nums[i];
        ans = max(ans, sum);
    }

    return ans;
}