bool hasAllCodes(string s, int k)
{
    if (k > s.size())
        return false;
    int req = 1 << k;

    unordered_set<string> res_set;

    for (int i = 0; i <= s.size() - k; i++)
        res_set.insert(s.substr(i, k));

    return res_set.size() == req;
}