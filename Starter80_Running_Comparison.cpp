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
        int s;
        cin >> s;
        vector<int> madar;
        vector<int> chod;
        string bs;
        string dk;
        for (int i = 0; i < s; i++)
        {
            int k;
            cin >> k;
            madar.push_back(k);
        }
        for (int i = 0; i < s; i++)
        {
            int k;
            cin >> k;
            chod.push_back(k);
        }

        for (int i = 0; i < s; i++)
        {
            if ((chod[i]) > 2 * madar[i])
            {
                bs.push_back('u');
            }
            else
            {
                bs.push_back('h');
            }
            if ((madar[i]) > 2 * chod[i])
            {
                dk.push_back('u');
            }
            else
            {
                dk.push_back('h');
            }
        }

        int cnt = 0;
        for (int i = 0; i < s; i++)
        {
            if (bs[i] == 'h' && dk[i] == 'h')
            {
                cnt++;
            }
        }
        cout << cnt << endl;
    }
    return 0;
}
