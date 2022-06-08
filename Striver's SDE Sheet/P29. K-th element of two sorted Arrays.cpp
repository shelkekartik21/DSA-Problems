int kthElement(int arr1[], int arr2[], int n, int m, int k)
{
    int i = 0, j = 0, idx = 0;

    while (i < n && j < m)
    {
        if (arr1[i] < arr2[j])
        {
            int x = arr1[i++];
            idx++;
            if (idx == k)
                return arr1[i - 1];
        }
        else
        {
            int x = arr2[j++];
            idx++;
            if (idx == k)
                return arr2[j - 1];
        }
    }

    while (i < n)
    {
        int x = arr1[i++];
        idx++;
        if (idx == k)
            return arr1[i - 1];
    }

    while (j < m)
    {
        int x = arr2[j++];
        idx++;
        if (idx == k)
            return arr2[j - 1];
    }
}