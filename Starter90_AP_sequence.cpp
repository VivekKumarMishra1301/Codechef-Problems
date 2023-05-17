#include <iostream>
#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long int
using namespace std;
void precal()
{
}
void solve()
{
    int sz;
    cin >> sz;
    vector<int> da(sz);
    for (int i = 0; i < sz; i++)
    {
        cin >> da[i];
    }

    if (da[0] == 0)
    {
        cout << 1 << " ";
    }
    else
    {
        cout << 0 << " ";
    }

    for (int i = 1; i < sz; i++)
    {
        if (da[i] != da[i - 1])
        {
            if (da[i] == 0)
            {
                cout << 1 << " ";
            }
            else
            {
                cout << 0 << " ";
            }
        }
        else
        {
            if (da[i - 1] == 0)
            {
                cout << 1 << " ";
            }
            else
            {
                cout << 0 << " ";
            }
        }
    }
    cout << endl;
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cout << fixed;
    cout << setprecision(10);
    precal();
    int t = 1;
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        solve();
    }
}
