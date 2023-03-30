#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int power(int x)
{
    if (x == 0)
    {
        return 1;
    }
    int ans = 1;
    for (int i = 1; i <= x; i++)
    {
        ans = ans * 2;
    }
    return ans;
}
int bin(char *st, int n)
{
    int dec = 0;
    int c = 0;
    for (int i = n - 1; i >= 0; i--)
    {
        if (st[i] == '0')
        {
            dec = dec + 0 * power(c);
            c++;
        }
        else
        {
            dec = dec + 1 * power(c);
            c++;
        }
    }
    return dec;
}
int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        char st[n];
        for (int i = 0; i < n; i++)
        {
            cin >> st[i];
        }
        int x = bin(st, n);
        int max = x ^ (x / power(1));
        int acans = 1;
        for (int i = 2; i <= n; i++)
        {
            long long ans1 = floor(x / power(i));
            int ans = (x ^ (ans1));
            if (ans >= max && ans >= x)
            {
                max = ans;
                acans = i;
            }
        }
        cout << acans << endl;
    }
    return 0;
}