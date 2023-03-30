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
        int pagal;
        cin >> pagal;
        if (pagal == 2)
        {
            cout << 2 << " " << 1 << endl;
            continue;
        }
        vector<int> hold(pagal, 0);
        int sh = 0;
        int kh = hold.size() - 1;

        for (int i = 1; i <= pagal; i++)
        {
            if (i % 2 == 0)
            {

                hold[sh++] = i;
            }
            else
            {
                hold[kh--] = i;
            }
        }
        // unordered_map<int,int>meraMap;
        // for(int i=0;i<pagal/2;i++){
        //     if(meraMap.count(hold[sh]+hold[kh])==0){
        //         meraMap[(hold[sh]+hold[kh])]++;
        //         sh++;
        //         kh--;
        //     }else {
        //         swap(hold[sh],hold[sh+1]);
        //         meraMap[(hold[sh]+hold[kh])]++;
        //         sh++;
        //         kh--;
        //     }
        // }
        for (int i = 0; i < hold.size(); i++)
        {
            cout << hold[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
