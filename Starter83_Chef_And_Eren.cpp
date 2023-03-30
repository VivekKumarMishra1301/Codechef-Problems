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
    long t;
    long sam, visam;
    cin >> t >> sam >> visam;
    if (t % 2 == 0)
    {
        cout << (t / 2) * (sam + visam) << endl;
    }
    else
    {
        cout << (t / 2) * sam + ((t / 2) + 1) * visam << endl;
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