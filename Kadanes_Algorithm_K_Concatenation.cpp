#include <bits/stdc++.h>
#include <iostream>
using namespace std;

long kadane(int arr[], int n)
{
    long maxi = INT_MIN;
    long currsum = 0;

    for (int i = 0; i < n; i++)
    {
        currsum += arr[i];
        maxi = max(currsum, maxi);
        if (currsum < 0)
        {
            currsum = 0;
        }
    }
    return maxi;
}

long solve(int arr[], int n, int k)
{
    long kad = kadane(arr, n);
    long currpref = 0;
    long currsuf = 0;
    long bestpref = INT_MIN;
    long bestsuf = INT_MIN;
    if (k == 1)
    {
        return kad;
    }
    for (int i = 0; i < n; i++)
    {
        currpref += arr[i];
        bestpref = max(bestpref, currpref);
    }
    long totalsum = currpref;
    for (int i = n - 1; i >= 0; i--)
    {
        currsuf += arr[i];
        bestsuf = max(bestsuf, currsuf);
    }
    if (totalsum < 0)
    {
        return max(bestsuf + bestpref, kad);
    }
    return max(bestpref + bestsuf + totalsum * (k - 2), kad);
}

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        cout << solve(arr, n, k) << endl;
    }
    return 0;
}
