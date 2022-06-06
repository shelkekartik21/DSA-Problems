int findPlatform(int arr[], int dep[], int n)
{
    sort(arr, arr + n);
    sort(dep, dep + n);

    int plat = 1, res = 1, i = 1, j = 0;
    while (i < n && j < n)
    {
        if (arr[i] <= dep[j])
        {
            plat++;
            i++;
        }
        else if (arr[i] > dep[j])
        {
            j++;
            plat--;
        }

        res = max(res, plat);
    }
    return res;
}