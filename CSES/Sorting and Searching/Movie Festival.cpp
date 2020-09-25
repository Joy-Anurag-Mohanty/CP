#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back

ll N,start_time,end_time;
vector<pair<ll,ll>>V;

void solve()
{   
    cin>>N;

    ll curr_end = 0,count = 0; //ending of current movie;

    for(ll i = 0; i < N; i++)
    {
        cin>>start_time>>end_time;
        V.pb(make_pair(end_time,start_time));
    }

    sort(V.begin(),V.end()); //sort on basis of end times

    for(int i = 0; i < N; i++)
    {
        if(V[i].second >= curr_end)
        {
            curr_end = V[i].first;
            count++;
        }
    }

    cout<<count<<endl;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    solve();

    return 0;
}