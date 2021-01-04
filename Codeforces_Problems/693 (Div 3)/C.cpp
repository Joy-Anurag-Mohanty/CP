#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll inp;

void solve()
{
    ll N;
    cin>>N;

    vector<ll>V;

    for(ll i = 0; i < N; i++)   
    {
        cin>>inp;
        V.push_back(inp);
    }

    vector<ll>scores(N);

    for(ll i = V.size() - 1; i >= 0; i--)
    {
        scores[i] = V[i];

        ll j = i + V[i];

        if(j < V.size())
            scores[i] += scores[j];
    }
    
    cout<<*max_element(scores.begin(),scores.end())<<endl;

}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int T;
    cin>>T;


    while(T--)
        solve();

    return 0;
}