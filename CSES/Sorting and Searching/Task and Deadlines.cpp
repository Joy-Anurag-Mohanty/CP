#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll N;
vector<pair<ll,ll>>V;

void printVector()
{
    for(ll i = 0; i < V.size(); i++)
        cout<<V[i].first<<" "<<V[i].second<<endl;
}

int main()
{
    cin>>N;

    for(ll i = 0; i < N; i++)
    {
        ll a,d; //a -> duration , d -> deadline
        cin>>a>>d;
        V.push_back(make_pair(a,d));
    }

    sort(V.begin(),V.end());

    //printVector();
    
    ll time = 0, reward = 0;

    for(ll i = 0; i < V.size(); i++)
    {
        time += V[i].first;
        reward += V[i].second - time;
    }

    cout<<reward<<endl;

    return 0;
}
