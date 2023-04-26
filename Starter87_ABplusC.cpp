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
    long madar;
    cin >> madar;
    if (madar == 1)
    {
        cout << -1 << endl;
        return;
    }
    if (madar == 2)
    {
        cout << 1 << " " << 1 << " " << 1 << endl;
        return;
    }
    if (madar == 3)
    {
        cout << 1 << " " << 1 << " " << 2 << endl;
        return;
    }
    if (madar == 4)
    {
        cout << 1 << " " << 1 << " " << 3 << endl;
        return;
    }

    if (madar <= 1000000)
    {
        cout << 1 << " " << 1 << " " << madar - 1 << endl;
        return;
    }

    // if(madar==1000000){

    // }

    // cout<<1<<" "<<1000000<<
    // if(madar)
    if (madar == 1000000000000)
    {

        cout << 1000000 << " " << 1000000 - 1 << " " << 1000000 << endl;
        return;
    }
    if (madar % 1000000 == 0)
    {
        long nu = madar / 1000000;
        cout << 1000000 << " " << nu - 1 << " " << 1000000 << endl;
        return;
    }
    cout << 1000000 << " " << madar / 1000000 << " " << madar % 1000000 << endl;

    // long nu=10000;
    // if(madar%nu==0){
    // nu+=1;
    // cout<<nu<<" "<<madar/nu<<" "<<madar%nu<<endl;
    // }else{
    //     cout<<nu<<" "<<madar/nu<<" "<<madar%nu<<endl;
    // }
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
