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
        unordered_map<int, int> meraMap;
        for (int i = 0; i < s; i++)
        {
            int k;
            cin >> k;
            meraMap[k]++;
        }
        int cnt = 0;
        int maxi = INT_MIN;
        for (auto i : meraMap)
        {
            cnt += i.second;
            if (maxi < i.second)
            {
                maxi = i.second;
            }
        }

        cout << cnt - maxi << endl;
    }
    return 0;
}
// 1,2,2,2,3,3,4,4
