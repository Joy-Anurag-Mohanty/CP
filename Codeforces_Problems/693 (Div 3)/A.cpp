#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    ll w,h,N;
    cin>>w>>h>>N;

    ll cnt = 1;
    ll sheets = 1;

    if(w % 2 == 0 && h % 2 == 0)
    {
        //cout<<"First case"<<endl;

        while(w % 2 == 0)
        {
            w /= 2;
            cnt += sheets;
            sheets = cnt;
        }

        while(h % 2 == 0)
        {
            h /= 2;
            cnt += sheets;
            sheets = cnt;
        }
        

    }

    else if(w % 2 == 0 && h % 2 != 0)
    {
        //cout<<"Second case"<<endl;

        while(w % 2 == 0)
        {
            w /= 2;
            cnt += sheets;
            sheets = cnt;
        }
    }

    else if(w % 2 != 0 && h % 2 == 0)
    {
        //cout<<"Third case"<<endl;

        while(h % 2 == 0)
        {
            h /= 2;
            cnt += sheets;
            sheets = cnt;
        }
    }

    else
    {
        //cout<<"Fourth Case"<<endl;
        cnt = 1;
    }

    //cout<<cnt<<endl;

    if(cnt >= N)
        cout<<"Yes"<<endl;
    else
        cout<<"No"<<endl;
    
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int T;
    cin>>T;


    while(T--)
        solve();

    return 0;
}