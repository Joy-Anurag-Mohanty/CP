#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back

const ll MOD = 1e9+7;

void solve()
{
    ll N;
    cin>>N;

    //total number of sequences = 10^N
    //total number of sequences without 0 = 9^N;
    //total number of sequences without 9 = 9^N;
    //total number of sequences without 0 & 9 = 8^N;

    //final ans = 10^N - 2*(9^N) + 8^N -> inclusion and exclusion

    ll m1 = 1,m2 = 1,m3 = 1;

    for(ll i = 0; i < N; i++)
    {
        m1 = (m1*10) % MOD;
        m2 = (m2*9) % MOD;
        m3 = (m3*8) % MOD;
    }

    ll ans = (m1 + MOD - (2*m2) % MOD + m3) % MOD;
    
    cout<<ans<<endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}