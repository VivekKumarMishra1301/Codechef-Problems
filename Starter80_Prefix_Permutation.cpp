#include <iostream>
using namespace std;
void print(int s)
{
    for (int i = 1; i <= s; i = i + 2)
    {
        cout << (i + 1) << " " << i << " ";
    }
}
int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        long long s;
        cin >> s;
        long long joda = (s * (s + 1)) / 2;
        if (s % 2 != 0)
        {
            cout << -1 << endl;
        }
        else
        {
            print(s);
            cout << endl;
        }
    }
    return 0;
}
