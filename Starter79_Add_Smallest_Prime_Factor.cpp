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
        unordered_map<int, int> meraMap;
        meraMap[2]++;
        meraMap[3]++;
        meraMap[5]++;
        meraMap[7]++;
        int inp, tr;
        cin >> inp >> tr;
        int hold = 0;
        // if(inp==9){
        //     inp=12;
        //     hold++;
        //     hold+=ceil((tr-inp)/2);
        //     cout<<hold<<endl;
        //     continue;
        // }
        if (inp % 2 == 0)
        {
            if ((tr - inp) % 2 == 0)
            {
                int k = (tr - inp) / 2;
                hold += k;
            }
            else
            {
                int k = (tr - inp) / 2;
                k++;
                hold += k;
            }
            // hold+=ceil((tr-inp)/2);
            cout << hold << endl;
        }
        else
        {
            if (meraMap.count(inp) == 0)
            {

                inp = inp + 3;
            }
            else
            {
                inp = inp + inp;
            }
            hold++;

            if ((tr - inp) % 2 == 0)
            {
                int k = (tr - inp) / 2;
                hold += k;
            }
            else
            {
                int k = (tr - inp) / 2;
                k++;
                hold += k;
            }

            //  hold+=ceil((tr-inp)/2);
            cout << hold << endl;
        }
    }
    return 0;
}
