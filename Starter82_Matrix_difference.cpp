#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;
void precal()
{
}
void solve()
{

    int mat;
    cin >> mat;
    int st = 1;
    int k = 1;
    int cnt = 1;
    while (cnt < mat * mat)
    {
        for (int i = 0; i < mat; i++)
        {
            cout << st << " ";
            cnt++;
            st += 2;
            if (st > mat * mat)
            {
                st = k + 1;
            }
        }
        cout << endl;
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