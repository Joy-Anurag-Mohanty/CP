#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll foo(vector<ll>V, ll N)
{
    ll len = 0;
    ll pre = - 1;

    for(ll i = 1; i <= N; i++)
    {
        if(V[i] != pre)
        {
            len++;
            pre = V[i];
        }
    }
    return len;
}

void test_cases()
{
    ll N,Q;
    cin>>N>>Q;

    vector<ll>V(N + 1);

    for(ll i = 1; i <= N; i++)
        cin>>V[i];

    ll curr = foo(V,N);

    while(Q--)
    {
        ll x,y;
        cin>>x>>y;

        if(x-1 >= 1 and V[x-1] == V[x] and y != V[x]) curr++;
        if(x+1 <= N and V[x+1] == V[x] and y != V[x]) curr++;
        if(x-1 >= 1 and V[x-1] != V[x] and y == V[x-1]) curr--;
        if(x+1 <= N and V[x+1] != V[x] and y == V[x+1]) curr--;
        V[x] = y;
        
        cout << curr <<endl;
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int T;
    cin>>T;

    while(T--)
    {
        test_cases();
    }

    return 0;
}