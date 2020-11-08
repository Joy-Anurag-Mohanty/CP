#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll N,inp;
vector<ll>V;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin>>N;

    for(ll i = 0; i < N; i++)
    {
        cin>>inp;
        V.push_back(inp);
    }

    ll res = 0;

    ll mx = LONG_MIN, sum = 0, cur = 0;

    for(ll i = 0; i < N; i++)
    {
        sum = sum + V[i];
        mx = max(mx,sum);

        res = max(res,cur + mx);
        cur = cur + sum;
    }

    cout<<res<<endl;

    return 0;
}