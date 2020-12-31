#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    double N;
    cin>>N;

    string S;
    cin>>S;

    double cnt = 0;
    
    for(int i = 0; i < N; i++)
    {
        if(S[i] == '1')
            cnt++;
    }

    //cout<<"Days Present: "<<cnt<<endl;

    double total_days = 120;

    double curr_att = (double)(cnt/N);

    //cout<<curr_att<<endl;

    if(curr_att >= 0.75)
    {
        cout<<"YES"<<endl;
        return;
    }

    else
    {
        double days_remaining = total_days - N;

        double new_att = (double)((cnt + days_remaining)/ total_days);

        //cout<<new_att<<endl;

        if(new_att >= 0.75)
        {
            cout<<"YES"<<endl;
            return;
        }

        else
        {
            cout<<"NO"<<endl;
            return; 
        }
        
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