#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll N,X;
    cin>>N>>X;

    vector<ll>V;

    for(ll i = 0; i < N; i++)
    {
        ll inp;
        cin>>inp;
        V.push_back(inp);
    }

    vector<ll>F;

    for(ll i = 0; i < N; i++)
    {
        if(V[i] != X)
            F.push_back(V[i]);
    }

    for(ll i = 0; i < F.size(); i++)
        cout<<F[i]<<" ";
    cout<<endl;
}