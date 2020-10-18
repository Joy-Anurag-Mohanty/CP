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

    ll T;
    cin>>T;

    while(T--)
    {
        ll N;
        cin>>N;

        vector<ll>V;

        ll negf = 0,posf = 0,othf = 0,f0 = 0;

        for(ll i = 0;i<N;i++)
        {
            ll inp;
            cin>>inp;

            if(inp == 0)
                f0++;

            else if(inp == 1)
                posf++;

            else if(inp == -1)
                negf++;

            else
                othf++;

            V.push_back(inp);
        }

        if(othf>1)
            cout<<"no"<<endl;

        else
        {
            if(othf && negf)
                cout<<"no"<<endl;

            else if(negf>1 && posf == 0)
                cout<<"no"<<endl;

            else
                cout<<"yes"<<endl;
        }

         
    }

    return 0;
}  