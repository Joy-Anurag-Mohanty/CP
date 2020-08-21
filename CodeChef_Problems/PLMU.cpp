#include <bits/stdc++.h> 
using namespace std;
#define ll long long 

int main() 
{ 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    #ifndef ONLINE_JUDGE
    freopen("Input.txt", "r", stdin);
    freopen("Output.txt", "w", stdout);
    #endif

    int T;
    cin>>T;

    while(T--)
    {
        ll N;
        cin>>N;

        vector<ll>V;

        for(ll i = 0;i<N;i++)
        {
            ll inp;
            cin>>inp;
            V.push_back(inp);
        }

        ll count0 = 0;
        ll count2 = 0;

        for(ll i = 0;i<N;i++)
        {
            if(V[i] == 0)
                count0++;

            if(V[i] == 2)
                count2++;
        }

        cout<<(count0*(count0-1))/2+(count2*(count2-1))/2<<endl;
    }

    return 0;
}