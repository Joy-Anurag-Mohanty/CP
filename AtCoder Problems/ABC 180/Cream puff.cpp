#include<bits/stdc++.h>
using namespace std;
#define ll long long 

ll N;
set<ll>S;

void solve()
{
    for(int i = 1; i <= sqrt(N); i++)
    {
        if(N % i == 0)
        {
            if(N/i == i)
                S.insert(i);
            
            else
            {
                S.insert(i);
                S.insert(N/i);
            }
        }
    }

    for(auto it = S.begin(); it != S.end(); it++)
        cout<<*it<<endl;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin>>N;

    solve();

    return 0;
}