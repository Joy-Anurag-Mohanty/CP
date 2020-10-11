#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back

ll A,B,C,D;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin>>A>>B>>C>>D;

    vector<ll>V;
    V.pb(A);
    V.pb(B);
    V.pb(C);
    V.pb(D);

    sort(V.begin(),V.end());

    if((V[0] + V[3]) == (V[1] + V[2]))
        cout<<"Yes"<<endl;

    else if(V[0] + V[1] + V[2] == V[3])
        cout<<"Yes"<<endl;
    
    else
        cout<<"No"<<endl;


    return 0;
}