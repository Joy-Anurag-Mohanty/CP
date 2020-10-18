#include<iostream>
#include<algorithm>
#include<vector>
#include<limits>

using namespace std;
#define ll long long

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);  

    #ifndef ONLINE_JUDGE
    freopen("Input.txt", "r", stdin);
    freopen("Output.txt", "w", stdout);
    #endif 

    int T;
    cin>>T;

    while(T--)
    {
        ll N,P;
        cin>>N>>P;

        vector<ll>V;

        for(ll i = 0;i<N;i++)
        {
            ll inp;
            cin>>inp;
            V.push_back(inp);
        }

        ll temp1 = P/2;
        ll temp2= P/10;

        ll hard = 0,easy = 0;

        for(ll i = 0;i<N;i++)
        {
            if(V[i]>=temp1)
                easy++;

            if(V[i]<=temp2)
                hard++;
        }

        if(easy == 1 && hard==2)
            cout<<"yes"<<endl;

        else
            cout<<"no"<<endl;
    }

    return 0;
}