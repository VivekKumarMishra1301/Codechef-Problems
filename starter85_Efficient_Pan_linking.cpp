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
    string sankhya;
    cin >> sankhya;

    long long hold = 0;
    for (int i = 0; i < sankhya.size(); i++)
    {
        hold = hold * 10;
        long long temp = sankhya[i] - '0';
        hold = (hold - temp) % 20;
    }
    cout << abs(hold) << endl;
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