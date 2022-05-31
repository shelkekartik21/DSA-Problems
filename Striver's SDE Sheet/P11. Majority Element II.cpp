// APPROACH 1 WITH TIME COMPLEXITY O(2N)
// SPACE COMPLEXITY O(N) WHERE N IS THE NUMBER OF DISTINCT ELEMENTS

vector<int> majorityElement(vector<int> &nums)
{
    vector<int> ans;
    int n = nums.size();
    unordered_map<int, int> mp;

    for (int i = 0; i < n; i++)
    {
        mp[nums[i]]++;
    }

    int req = n / 3;

    for (auto it = mp.begin(); it != mp.end(); it++)
    {
        if (it->second > req)
        {
            ans.push_back(it->first);
        }
    }

    return ans;
}

// APPROACH 2 WITH TIME COMPLEXITY O(N)
// SPACE COMPLEXITY O(1);

vector<int> majorityElement(vector<int> &nums)
{
    int n = nums.size(), ele1 = 0, ele2 = 1, count1 = 0, count2 = 0;

    for (int i = 0; i < n; i++)
    {
        if (nums[i] == ele1)
        {
            count1++;
        }
        else if (nums[i] == ele2)
        {
            count2++;
        }
        else if (count1 == 0)
        {
            ele1 = nums[i];
        }
        else if (count2 == 0)
        {
            ele2 = nums[i];
        }
        else
        {
            count1--;
            count2--;
        }
    }

    count1 = count2 = 0;
    for (int i = 0; i < n; i++)
    {
        if (nums[i] == ele1)
            count1++;
        else if (nums[i] == ele2)
            count2++;
    }

    vector<int> ans;

    if (count1 > n / 3)
        ans.push_back(ele1);
    if (count2 > n / 3)
        ans.push_back(ele2);

    return ans;
}