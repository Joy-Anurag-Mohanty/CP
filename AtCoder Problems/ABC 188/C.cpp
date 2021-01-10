#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll second;

void printVec(vector<ll>V)
{
    for(ll i = 0 ; i < V.size(); i++)
        cout<<V[i]<<" ";
    cout<<endl;
}

ll power(ll x, ll y)
{
    ll res = 1;

    while(y > 0)
    {
        if(y & 1)
            res = res * x;
        
        y = y >> 1;
        x = x * x;
    }

    return res;
}

void solve()
{
    ll N;
    cin>>N;

    if(N == 1)
    {
        vector<ll>V(2);
        for(ll i = 0; i < 2; i++)
            cin>>V[i];
        
        ll res = min(V[0], V[1]);

        for(ll i = 0; i < 2; i++)
        {
            if(V[i] == res)
            {
                cout<<i + 1<<endl;
                return;
            }
        }
        
        return;
    }
    
    ll players = power(2,N);

    //cout<<players<<endl;

    vector<ll>rating(players);
    vector<ll>cpy(players);

    for(ll i = 0; i < players; i++)
    {
        cin>>rating[i];
        cpy[i] = rating[i];
    }

    //printVec(rating);

    for(ll i = 1; i <= N; i++)
    {
        vector<ll>temp;

        for(ll j = 1; j <= power(2, N - i); j++)
        {
            temp.push_back(max(rating[2*j - 2], rating[2*j - 1]));
        }

        if(temp.size() == 2)
        {
            second = min(temp[1], temp[0]);
            break;
        }

        //printVec(temp);

        for(ll j = 0 ; j < temp.size(); j++)
            rating[j] = temp[j];

        //printVec(rating);
    }

    //cout<<second<<endl;

    for(ll i = 0; i < cpy.size(); i++)
    {
        if(cpy[i] == second)
        {
            cout<<i + 1<<endl;
            return;
        }
    }

}

int main()
{
    solve();

    return 0;
}