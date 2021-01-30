#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll N,S,D;
    cin>>N>>S>>D;

    bool flag = false;

    for(ll i = 0; i < N; i++)
    {
        ll X,Y;
        cin>>X>>Y;

        if(X < S && Y > D)
        {
            flag = true;
            break;
        }
    }

    if(flag)
        cout<<"Yes"<<endl;
    else
        cout<<"No"<<endl;
}