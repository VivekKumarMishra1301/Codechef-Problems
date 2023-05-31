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
    int p, s, t;
    cin >> p >> s >> t;
    if ((p == 0 && s == 0) || (p == 0 && t == 0) || (s == 0 && t == 0))
    {
        cout << "Water filling time" << endl;
    }
    else
    {
        cout << "Not now" << endl;
    }
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
