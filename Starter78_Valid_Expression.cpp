#include <bits/stdc++.h>
#include <iostream>
using namespace std;
void ghat(int mas, int n)
{
    int gin = 1;
    for (int i = 0; i < mas; i++)
    {
        if (gin != n)
        {
            cout << "-";
            gin--;
            continue;
        }
        cout << "*";
    }
    cout << endl;
}
void shunya(int mas, int n)
{
    // string s="-";
    // for(int i=0;i<mas-1;i++){
    //     if(s[s.size()-1]=='-'){
    //         s+="+";
    //     }else{
    //         s+="-";
    //     }
    // }
    // cout<<s<<endl;
    int gin = 1;
    for (int i = 0; i < mas; i++)
    {
        if (gin != n)
        {
            cout << "+";
            gin++;
            continue;
        }
        cout << "*";
    }
    cout << endl;
}
int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int mas;
        int san;
        cin >> mas >> san;

        if ((san - mas) > 1 || (san < 0 && abs(san) >= mas))
        {
            cout << -1 << endl;
            continue;
        }
        if (san > 0)
        {

            shunya(mas, san);
            continue;
        }
        ghat(mas, san);
        continue;

        if (san == 0)
        {
            if (mas % 2 != 0)
                shunya(mas, san);
            else
                cout << -1 << endl;
            continue;
        }
        if (san == mas + 1)
        {
            string s = "";
            for (int i = 0; i < mas; i++)
            {
                s += "+";
            }
            cout << s << endl;
            continue;
        }

        if (san == mas)
        {
            string s = "*";
            for (int i = 0; i < mas - 1; i++)
            {
                s += "+";
            }
            cout << s << endl;
            continue;
        }
        // if(mas==2&&san==1){
        //     cout<<-1<<endl;
        //     continue;
        // }

        if (san == 1 && mas >= san)
        {
            string s = "";
            for (int i = 0; i < mas; i++)
            {
                s += "*";
            }
            // s+="+";
            // s+="-";
            cout << s << endl;
            continue;
        }
        string s = "";
        for (int i = 0; i < mas - (san - 1); i++)
        {
            s += "*";
        }
        for (int i = 0; i < san - 1; i++)
            s += "+";
        cout << s << endl;
    }

    return 0;
}
