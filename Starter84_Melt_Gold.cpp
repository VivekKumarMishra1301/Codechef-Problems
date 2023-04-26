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
    int phla, dusra;
    cin >> phla >> dusra;
    int cnt = 0;
    int i = 1;
    while (1)
    {
        if (dusra >= phla)
        {
            break;
        }
        dusra += i;
        i++;
    }
    cout << i - 1 << endl;
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