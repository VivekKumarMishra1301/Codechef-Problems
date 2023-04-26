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
    string madar;
    cin >> madar;

    int cnt = 1;
    if (sz == 1)
    {
        cout << 1 << endl;
        return;
    }
    int in = 1;
    int ot = 0;
    int cnt2 = 0;
    for (int i = 1; i < sz; i++)
    {
        in = (madar[i - 1] - '0') ^ in;
        ot = (madar[i - 1] - '0') ^ ot;
        // cout<<in<<"/";
        if (in == 1)
        {
            cnt++;
        }
        if (ot == 1)
        {
            cnt2++;
        }
    }
    // if(in=='1'){
    //     cnt++;
    // }
    cout << max(cnt, cnt2) << endl;
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