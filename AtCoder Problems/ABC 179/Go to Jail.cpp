#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back

void solve()
{
    int N;
    cin>>N;

    vector<pair<int,int>>V;
    
    for(int i = 0;i < N; i++)
    {
        int a,b;
        cin>>a>>b;
        V.pb(make_pair(a,b));
    }

    for(int i = 0; i <= N - 3; i++)
    {
        if(V[i].first == V[i].second)
        {
            if(V[i+1].first ==  V[i+1].second)
            {
                if(V[i+2].first == V[i+2].second)
                {
                    cout<<"Yes"<<endl;
                    return;
                }
            }
        } 
    }

    cout<<"No"<<endl;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    solve();

    return 0;
}