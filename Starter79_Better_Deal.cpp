#include <iostream>
using namespace std;

int main()
{
    // your code goes here

    int t;
    cin >> t;
    while (t--)
    {
        int ek, du;
        cin >> ek >> du;
        int phla = 100 - ek;
        int dus = 200 - 2 * du;
        if (phla > dus)
        {
            cout << "SECOND" << endl;
        }
        else if (phla < dus)
        {
            cout << "FIRST" << endl;
        }
        else
        {
            cout << "BOTH" << endl;
        }
    }
    return 0;
}
