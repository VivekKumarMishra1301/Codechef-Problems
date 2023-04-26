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
    int sz, limit;
    string madar;
    cin >> sz >> limit >> madar;
    if (madar[0] == '0')
    {
        limit--;
        madar[0] = '1';
    }
    while (limit--)
    {
        madar += '0';
    }
    cout << madar << endl;
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