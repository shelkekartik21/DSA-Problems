int maxProfit(vector<int> &prices)
{
    int n = prices.size();
    int max_profit = 0;
    int max_arr[n + 1], min_arr[n + 1];

    max_arr[0] = prices[0];
    min_arr[n - 1] = prices[n - 1];

    for (int i = 1; i < n; i++)
    {
        max_arr[i] = min(max_arr[i - 1], prices[i]);
    }

    for (int i = n - 2; i >= 0; i--)
    {
        min_arr[i] = max(min_arr[i + 1], prices[i]);
    }

    for (int i = 0; i < n; i++)
    {
        int prf = abs(min_arr[i] - max_arr[i]);
        max_profit = max(max_profit, prf);
    }

    return max_profit;
}