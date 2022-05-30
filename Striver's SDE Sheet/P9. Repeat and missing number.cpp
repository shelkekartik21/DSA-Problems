vector<int> Solution::repeatedNumber(const vector<int> &A)
{
    int mp[1000005];

    memset(mp, 0, sizeof(mp));

    int n = A.size();

    for (int i = 0; i < n; i++)

        mp[A[i]]++;

    vector<int> v;

    for (int i = 1; i <= n; i++)

    {

        if (mp[i] == 2)

        {

            v.push_back(i);

            break;
        }
    }

    for (int i = 1; i <= n; i++)

    {

        if (mp[i] == 0)

        {

            v.push_back(i);

            break;
        }
    }

    return v;
}
