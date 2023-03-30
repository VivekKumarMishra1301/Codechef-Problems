#include <bits/stdc++.h>
#include <iostream>
using namespace std;
void opt(long p, long q)
{
    if (p == q)
    {
        if (p % 2 == 0)
        {
            cout << "CHEFINA" << endl;
        }
        else
        {
            cout << "CHEF" << endl;
        }
    }
    else if (p > q)
    {
        if (p - q >= 2)
        {
            cout << "CHEF" << endl;
        }
        else
        {
            if (p % 2 != 0)
            {
                cout << "CHEFINA" << endl;
            }
            else
            {
                cout << "CHEF" << endl;
            }
        }
    }
    else
    {
        if (q - p >= 2)
        {
            cout << "CHEFINA" << endl;
        }
        else
        {
            if (q % 2 == 0)
            {
                cout << "CHEF" << endl;
            }
            else
            {
                cout << "CHEFINA" << endl;
            }
        }
    }
}
int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        long nipora, nipori;
        cin >> nipora >> nipori;
        opt(nipora, nipori);
    }
    return 0;
}
