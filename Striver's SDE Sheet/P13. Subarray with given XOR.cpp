int Solution::solve(vector<int> &A, int B)
{
    int n = A.size(), count = 0;
    unordered_map<int, int> mp;

    int x_or = 0;
    for (int i = 0; i < n; i++)
    {
        x_or ^= A[i];
        int tmp = x_or ^ B;
        count += (mp[tmp]);

        if (x_or == B)
        {
            count++;
        }

        mp[x_or]++;
    }

    return count;
}