#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back

ll N,M;

void solve()
{
    cin>>N>>M;

    multiset<ll,greater<ll>>S;

    for(ll i = 0; i < N; i++)
    {
        ll inp;
        cin>>inp;
        S.insert(inp);
    }

    for(ll i = 0 ; i < M; i++)
    {
        ll inp;
        cin>>inp;

        auto itr = S.lower_bound(inp);

        if(itr == S.end())
            cout<<-1<<endl;
        else
        {
            cout<<(*itr)<<endl;
            S.erase(itr);
        }   
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    solve();

    return 0;
}