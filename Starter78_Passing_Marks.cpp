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
        int sthan;
        int padhaku;
        cin >> sthan >> padhaku;
        vector<int> chatra;
        for (int i = 0; i < sthan; i++)
        {
            int k;
            cin >> k;
            chatra.push_back(k);
        }
        sort(chatra.begin(), chatra.end());
        int dh = sthan;
        cout << chatra[dh - padhaku] - 1 << endl;
    }
    return 0;
}
