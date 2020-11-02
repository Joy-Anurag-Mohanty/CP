#include<bits/stdc++.h>
using namespace std;
#define ll long long

const ll MOD = 998244353;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    ll a,b,c;
    cin>>a>>b>>c;

    ll num1 = ((c*(c+1))/2) % MOD;
    ll num2 = ((b*(b+1))/2) % MOD;
    ll num3 = ((a*(a+1))/2) % MOD;

    ll num4 = (num1*num2)%MOD;
    ll num5 = (num3*num4)%MOD;

    cout<<num5<<endl;

    return 0;
}