#include <iostream>
using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int tafi;
        int sadaka;
        cin >> tafi >> sadaka;
        if (sadaka <= tafi)
        {
            cout << sadaka << endl;
        }
        else
        {
            cout << tafi + (sadaka - tafi) * 2 << endl;
        }
    }
    return 0;
}
