vector<int> JobScheduling(Job arr[], int n)
{
    vector<pair<int, int>> v;
    for (int i = 0; i < n; i++)
    {
        v.push_back({arr[i].profit, arr[i].dead});
    }

    sort(v.begin(), v.end());
    reverse(v.begin(), v.end());

    int jobs = 0, max_profit = 0;
    vector<int> dp(101, 0);

    for (int i = 0; i < n; i++)
    {
        for (int j = v[i].second - 1; j >= 0; j--)
        {
            if (dp[j] == 0)
            {
                dp[j] = v[i].first;
                max_profit += dp[j];
                jobs++;
                break;
            }
        }
    }

    return {jobs, max_profit};
}