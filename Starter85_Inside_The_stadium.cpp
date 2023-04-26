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

    long sz;
    cin >> sz;
    vector<long> khela(sz);
    for (int i = 0; i < sz; i++)
    {
        cin >> khela[i];
    }
    float joda = 0;
    int cnt = 0;
    for (int i = 0; i < sz; i++)
    {
        joda += khela[i];
        if (((joda * 100) / (i + 1)) == 100)
        {
            cnt++;
        }
    }
    cout << cnt << endl;
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