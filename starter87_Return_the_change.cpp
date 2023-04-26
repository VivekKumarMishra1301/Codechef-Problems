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
    int dam;
    cin >> dam;
    int near = dam % 10;
    if (near < 5)
    {
        int divi = dam / 10;
        cout << 100 - (divi * 10) << endl;
    }
    else
    {
        int divi = dam / 10;
        cout << 100 - ((divi + 1) * 10) << endl;
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
