#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back

ll N,inp;

ll gcd(ll a, ll b)
{
    if(b == 0)
        return a;
    return gcd(b, a % b);
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin>>N;

    ll res = 0;

    for(ll i = 0; i < N; i++)
    {
        cin>>inp;
        res = gcd(res,inp);
    }

    cout<<res<<endl;

    return 0;
}