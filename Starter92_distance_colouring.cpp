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
    int mod = 1000000007;
    int ph;
    int k;
    cin >> ph >> k;
    long hold = 1;
    // if(k==1){
    //     cout<<1<<endl;
    //     return;
    // }

    int t = k;
    int sum = 0;
    for (int i = 1; i <= ph; i++)
    {
        // if((k+i)<=ph)
        // if(t==0){
        //     t=k;
        //     sum+=hold;
        //     sum%=mod;
        //     hold=1;
        // }
        hold = (hold * (t)) % mod;
        // hold%=mod;
        if (t > 1)
        {
            t = t - 1;
        }
    }
    sum += hold;
    sum %= mod;
    cout << hold << endl;
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
