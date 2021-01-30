#include<bits/stdc++.h>
using namespace std;
#define ll long long

vector<pair<int,int>>conditions;
vector<pair<int,int>>balls;

int main()
{
    ll N;
    cin>>N;

    N *= 2;

    set<ll>S;

    for(ll i = 1; i * i <= N; i++)
    {
        if(N % i != 0)
            continue;

        if(i % 2 == (N/i) % 2)
            continue;
        
        S.insert(i);
        S.insert(N / i);
    }

    cout<<S.size()<<endl;
}