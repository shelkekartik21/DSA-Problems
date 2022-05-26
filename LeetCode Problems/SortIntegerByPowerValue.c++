// LeetCode 1387.
// loop from lo i.e. the smallest number to hi i.e. the highest number
// run a while loop until the number becomes 1
// check if the number is even or odd if its even we will divide it by 2 else perform x = 3 * x + 1
// each step increment the count variable
// in the vector of pair add the count value and the number
// after sorting the vector return the element in the k-1 position

int getKth(int lo, int hi, int k)
{
    vector<pair<int, int>> v;

    for (int i = lo; i <= hi; i++)
    {
        int x = i;
        int count = 0;
        while (x != 1)
        {
            if (x % 2 == 0)
            {
                x = x / 2;
            }
            else
            {
                x = 3 * x + 1;
            }
            count++;
        }
        v.push_back({count, i});
    }
    sort(v.begin(), v.end());
    return v[k - 1].second;
}