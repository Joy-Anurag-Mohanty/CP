#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back

ll getIndex(vector<ll>V,ll X,ll p)
{
    ll min = 1e8, min_pos = 0;

    for(ll i = 0; i < V.size(); i++)
    {
        if(V[i] == X)
        {
            if(abs(p - i) < min)
            {
                min = abs(p - i);
                min_pos = i;
            }
        }
    }

    return min_pos;
}

void solve()
{
    ll N,X,p,k,inp;
    cin>>N>>X>>p>>k;

    //cout<<p<<" "<<k<<endl;

    if(N <= 5)
    {
        p--,k--;

        vector<ll>V;

        for(ll i = 0 ; i < N; i++)
        {
            cin>>inp;
            V.pb(inp);
        }

        sort(V.begin(),V.end());

        if(k > p && X > V[p])
        {
            cout<<-1<<endl;
            return;
        }

        if(k < p && X < V[p])
        {
            cout<<-1<<endl;
            return;
        }

        ll cnt = 0;

        while(V[p] != X)
        {
            V[k] = X;
            sort(V.begin(),V.end());
            cnt++;
        }

        cout<<cnt<<endl;

        return;
    }

    vector<ll>V;

    for(ll i = 0 ; i < N; i++)
    {
        cin>>inp;
        V.pb(inp);
    }

    sort(V.begin(),V.end());

    ll index = getIndex(V,X,p+1);
    ll cnt = 0;

    if(V[index] != X)
    {
        V[k-1] = X;
        sort(V.begin(),V.end());
        cnt++;
    }

    if(V[p-1] == X)
    {
        cout<<cnt<<endl;
        return;
    }

    if(k > p && X > V[p-1])
    {
        cout<<-1<<endl;
        return;
    }

    if(k < p && X < V[p-1])
    {
        cout<<-1<<endl;
        return;
    }

    index =  getIndex(V,X,p+1) + 1;
    cout<<abs(p - index) + cnt<<endl;
    
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int T,cs = 1;
    cin>>T;

    while(T--)
    {
        //cout<<"case #"<<cs<<" : ";
        solve();
        //cs++;
    }

    return 0;
}