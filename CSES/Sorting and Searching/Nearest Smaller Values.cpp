#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back

ll N,inp;
vector<pair<ll,ll>>V; //input and position (1 - based)
stack<pair<ll,ll>>st;

void solve()
{
    cin>>N;

    for(ll i = 0 ; i < N; i++)
    {
        cin>>inp;
        V.pb(make_pair(inp,i+1));
    }

    for(ll i = 0 ; i < N; i++)
    {
        while(!st.empty() && ((st.top()).first) >= V[i].first)
        {
            st.pop();
        }
        
        if(st.empty())
            cout<<0<<" ";
        else
            cout<<(st.top()).second<<" ";
        
        st.push(V[i]);
    }

    cout<<endl;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    solve();

    return 0;
}