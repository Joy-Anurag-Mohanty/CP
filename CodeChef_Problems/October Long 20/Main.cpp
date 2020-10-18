#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back

void printMat(vector<vector<ll>>V)
{
    for(ll i = 0; i < V.size(); i++)
    {
        for(ll j = 0 ; j < V[i].size(); j++)
        {
            cout<<V[i][j]<<" ";
        }

        cout<<endl;
    }
}

class Edge
{
    public:

    ll src,dest,weight;

    Edge(ll src_p, ll dest_p, ll weight_p)
    {
        src = src_p;
        dest = dest_p;
        weight = weight_p;
    }
};

int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    ll N,D,inp;
    cin>>N>>D;

    vector<vector<ll>>V;

    for(ll i = 0; i < N; i++)
    {
        vector<ll>temp;

        for(ll j = 0; j < D; j++)
        {
            cin>>inp;
            temp.pb(inp);
        }

        V.pb(temp);
    }

    printMat(V);

    return 0;
}
