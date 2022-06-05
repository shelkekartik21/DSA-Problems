class MapSum
{
public:
    unordered_map<string, int> mp;
    MapSum()
    {
        mp;
    }

    void insert(string key, int val)
    {
        mp[key] = val;
    }

    int sum(string prefix)
    {
        int siz = prefix.size();
        int ans = 0;

        for (auto it = mp.begin(); it != mp.end(); it++)
        {
            string str = it->first;
            if (str.substr(0, siz) == prefix)
            {
                ans += mp[str];
            }
        }

        return ans;
    }
};