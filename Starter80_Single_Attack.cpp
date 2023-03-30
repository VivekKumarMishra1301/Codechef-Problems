#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int b, c, an;
        cin >> b >> c >> an;
        int k = b;
        int cnt1 = 0;
        int cnt2 = 1;
        k -= an;
        // while(k>0){
        // if(k%c==0)
        cnt2 += k / c;
        // else{

        // }
        // k/=c;

        // }
        if (k % c != 0)
        {
            cnt2++;
        }
        cnt1 += b / c;
        if (b % c != 0)
        {
            cnt1++;
        }
        cout << min(cnt1, cnt2) << endl;
    }
    return 0;
}
