int maxMeetings(int start[], int end[], int n)
{
    int count = 1;
    vector<pair<int, int>> v;

    for (int i = 0; i < n; i++)
    {
        v.push_back({end[i], start[i]});
    }

    sort(v.begin(), v.end());

    int lo = v[0].second;
    int hi = v[0].first;

    for (int i = 1; i < n; i++)
    {
        if (v[i].second > hi)
        {
            count += 1;
            hi = v[i].first;
            lo = v[i].second;
        }
    }

    return count;
}