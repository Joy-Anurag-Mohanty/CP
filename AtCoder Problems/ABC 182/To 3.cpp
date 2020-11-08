#include<bits/stdc++.h>
using namespace std;
#define ll long long

string num;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin>>num;

    int len = num.length();
    int digsum = 0;

    for(int i = 0; i < len; i++)
        digsum = digsum + (num[i] - '0');

    if(digsum % 3 == 0)
    {
        //num is divisible ny 3
        cout<<0<<endl;
        return 0;
    }

    if(len == 1)
    {
        cout<<-1<<endl;
        return 0;
    }

    for(int i = 0; i < len; i++)
    {
        if(digsum % 3 == (num[i] - '0') % 3)
        {
            cout<<1<<endl;
            return 0;
        }
    }

    if(len == 2)
    {
        cout<<-1<<endl;
        return 0;
    }

    cout<<2<<endl;

    return 0;
}