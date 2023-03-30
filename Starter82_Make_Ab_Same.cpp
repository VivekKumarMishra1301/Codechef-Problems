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
    map<int, int> right;
    map<int, int> left;
    vector<int> a1(sz);
    vector<int> b1(sz);
    for (int i = 0; i < sz; i++)
    {
        cin >> a1[i];
        if (i != 0)
            right[a1[i]]++;
    }
    left[a1[0]]++;
    // left[a1[1]]++;
    for (int i = 0; i < sz; i++)
    {
        cin >> b1[i];
        //   right[b1[i]]++;
    }
    if (a1 == b1)
    {
        cout << "YES" << endl;
        return;
    }
    if (a1[0] != b1[0] || a1[sz - 1] != b1[sz - 1])
    {
        cout << "NO" << endl;
        return;
    }
    bool flag = true;
    for (int i = 1; i < sz - 1; i++)
    {
        //   if(right.find(a1[i])!=right.end()&&right[a1[i]]!=0){
        right[a1[i]]--;
        //   }else{

        //   }
        if (b1[i] == 0 && a1[i] == 1)
        {

            flag = false;
            break;
        }
        else
        {
            if (a1[i] == b1[i])
            {
                a1[i] = b1[i];
                left[a1[i]]++;
                continue;
            }
            if (a1[i] == 0 && ((right.find(1) == right.end() || right[1] < 1) && (left.find(1) == left.end() || left[1] < 1)))
            {
                flag = false;
                break;
            }
        }
        a1[i] = b1[i];
        left[a1[i]]++;
    }
    if (flag)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cout << fixed;
    cout << setprecision(10);
    // precal();
    int t = 1;
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        solve();
    }
}