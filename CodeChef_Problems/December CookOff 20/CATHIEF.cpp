#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    double x,y,K,N;
    cin>>x>>y>>K>>N;

    double steps = abs((x - y)/(2*K));

    if(floor(steps) == ceil(steps))
    {
        //cout<<steps<<endl;

        if(x - steps*K == y + steps*K && x - steps*K >=0 && y + steps*K <= N)
        {
            cout<<"Yes"<<endl;
            return;
        }

        else if(x + steps*K == y - steps*K && x - steps*K <= N && y + steps*K >= 0)
        {
            cout<<"Yes"<<endl;
            return;
        }

        else
        {
            cout<<"No"<<endl;
            return;
        }
        
        
    }
    
    else
    {
        cout<<"No"<<endl;
        return;
    }
    

}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int T;
    cin>>T;

    while(T--)
        solve();
}