#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back

void solve()
{
    vector<string>V;

    for(int digit = 1; digit <= 9; digit++)
    {
        string num = "";

        for(int rep = 1; rep <= 4; rep++)
        {
            num = num + to_string(digit);
            V.pb(num);
        }
    }

    int N,c = 0;
    cin>>N;

    for(int i = 0; i < V.size(); i++)
    {
        if(to_string(N) == V[i])
        {
            c += V[i].length();
            break;
        }
        
        else
            c += V[i].length();
    }

    cout<<c<<endl;
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