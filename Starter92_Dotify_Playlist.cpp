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
    int k;
    cin >> k;
    int b;
    cin >> b;
    vector<int> d(sz);
    vector<int> bh(sz);
    map<int, vector<int>> meraMap;
    for (int i = 0; i < sz; i++)
    {
        cin >> d[i];
        cin >> bh[i];
        meraMap[bh[i]].push_back(d[i]);
    }
    if (meraMap.find(b) == meraMap.end() || meraMap[b].size() < k)
    {
        cout << -1 << endl;
        return;
    }
    int s = 0;

    sort(meraMap[b].begin(), meraMap[b].end(), greater<int>());

    for (auto i : meraMap[b])
    {
        if (k == 0)
        {
            break;
        }
        s += i;
        k--;
    }
    cout << s << endl;
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
