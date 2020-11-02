#include<bits/stdc++.h>
using namespace std;
#define ll long long

const ll MOD = 998244353;

int N,K;

int foo(int val)
{
    return max(N - abs(val - (N + 1)), 0);
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin>>N>>K;

    ll quads = 0;

    for(int x = -3000000; x <= 3000000; x++)
        quads = quads + (ll)foo(x)*(ll)foo(x - K);

    cout<<quads<<endl;

    return 0;
}