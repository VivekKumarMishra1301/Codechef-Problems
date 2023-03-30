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

    int phla, dusra, teesra;
    cin >> phla >> dusra >> teesra;
    if (phla < dusra && dusra < teesra)
    {
        cout << "0" << endl;
        return;
    }

    int uttar = -1;
    for (int i = 0; i <= 250; i++)
    {
        int l = phla ^ i;
        int m = dusra ^ i;
        int n = teesra ^ i;
        if (l < m && m < n)
        {
            cout << i << endl;
            return;
        }
    }
    cout << uttar << endl;
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