#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;
void precal()
{
}
void solve()
{
    int sz;
    cin >> sz;
    map<int, int> meraMap;
    vector<int> kuch(sz);
    for (int i = 0; i < sz; i++)
    {
        cin >> kuch[i];
        meraMap[kuch[i]]++;
    }
    bool flag = true;
    int cnt = 0;
    for (auto i : meraMap)
    {
        if (flag)
        {
            flag = false;
            continue;
        }
        cnt += i.second;
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