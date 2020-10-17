#include<bits/stdc++.h>
using namespace std;
#define ll long long 

ll N,inp;
vector<ll>V;

void solve()
{
    ll md = 0, cd = 0, sum = 0;
    double ed = 0;

    for(ll i = 0; i < N; i++)
    {
        md += abs(V[i]);

        if(cd < abs(V[i]))
            cd = abs(V[i]);

        sum += (V[i]*V[i]);
    }

    cout<<md<<endl;
    
    cout<<setprecision(20)<<sqrt(sum)<<endl;

    cout<<cd<<endl;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin>>N;

    for(ll i = 0; i < N; i++)
    {
        cin>>inp;
        V.push_back(inp);
    }

    solve();

    return 0;
}