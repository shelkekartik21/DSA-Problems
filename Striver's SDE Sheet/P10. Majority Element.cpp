// APPROACH 1 WITH EXTRA SPACE COMPLEXITY O(N) where N is number of distinct elements
// TIME COMPLEXITY O(2N)

int majorityElement(vector<int> &nums)
{
    unordered_map<int, int> mp;

    for (int i = 0; i < nums.size(); i++)
    {
        mp[nums[i]]++;
    }

    int req = nums.size() / 2;

    for (auto it = mp.begin(); it != mp.end(); it++)
    {
        if (it->second > req)
        {
            return it->first;
        }
    }

    return -1;
}

// APPROACH 2 WITH CONSTANT SPACE COMPLEXITY O(1)
// TIME COMPLEXITY O(N)
// MOORE'S VOTING ALGORITHM
int majorityElement(vector<int> &nums)
{
    int n = nums.size(), curr_ele = nums[0], count = 0;

    for (int i = 1; i < n; i++)
    {
        if (nums[i] == curr_ele)
        {
            count++;
        }
        else
        {
            count--;
            if (count == 0)
            {
                curr_ele = nums[i];
                count = 1;
            }
        }
    }

    return curr_ele;
}