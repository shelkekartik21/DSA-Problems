bool canVisitAllRooms(vector<vector<int>> &rooms)
{
    unordered_set<int> vis;
    queue<int> keys;
    keys.push(0);

    while (!keys.empty())
    {
        int curr = keys.front();
        keys.pop();

        vis.insert(curr);
        for (int k : rooms[curr])
        {
            if (vis.find(k) == vis.end())
            {
                keys.push(k);
            }
        }
    }

    return vis.size() == rooms.size();
}