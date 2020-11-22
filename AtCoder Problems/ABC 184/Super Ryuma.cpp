#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    ll A,B,C,D;
    cin>>A>>B>>C>>D;
    ll P,Q,R,S;
    P=A+B;
    Q=A-B;
    R=C+D;
    S=C-D;
    if(abs(P-R)+abs(Q-S)==0)cout<<0<<endl;
    else if(abs(P-R)<=3&&abs(Q-S)<=3)cout<<1<<endl;
    else if(P==R&&(abs(Q-S))%2==0)cout<<1<<endl;
    else if(P==R)cout<<2<<endl;
    else if(Q==S&&(abs(P-R))%2==0)cout<<1<<endl;
    else if(Q==S)cout<<2<<endl;
    else if((abs(Q-S))%2==0&&(abs(P-R))%2==0)cout<<2<<endl;
    else if(abs(P-R)<=3)cout<<2<<endl;
    else if(abs(Q-S)<=3)cout<<2<<endl;
    else if(abs(P-R)<=6&&abs(Q-S)<=6)cout<<2<<endl;
    else cout<<3<<endl;

}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    solve();

    return 0;
}