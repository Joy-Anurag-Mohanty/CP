#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back

void printArray(vector<ll>V)
{
    for(ll i = 0 ; i < V.size();  i++)
        cout<<V[i]<<" ";
    cout<<endl; 
}

void solve()
{
    int flag = 1;
    ll N,K;
    cin>>N>>K;

    vector<ll>Q;

    for(ll i = 0; i < N; i++)
    {
        ll q;
        cin>>q;
        Q.pb(q);
    }

    ll days = 1,pending;

    for(ll i = 0; i < N - 1; i++)
    {

        //printArray(Q);

        if(Q[i] < K)
        {
            flag = 0;
            break;
        }

        else
        {
            pending = Q[i] - K;
            Q[i+1] = Q[i+1] + pending;
            days++;
        }
    }

    if(!flag)
        cout<<days<<endl;
    else
    {
        ll last = Q[Q.size() - 1];
        days = days + (last/K);
        cout<<days<<endl;
    }
    
      
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int T,cs = 1;
    cin>>T;

    while(T--)
    {
        //cout<<"Case #"<<cs<<": "<<endl;
        solve();
        //cout<<endl;
        //cs++;
    }

    return 0;
}