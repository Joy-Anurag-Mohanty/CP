#include<bits/stdc++.h>
using namespace std;

int main()
{
    #ifndef ONLINE_JUDGE
    freopen("Input.txt", "r", stdin);
    freopen("Output.txt", "w", stdout);
    #endif

    int T;
    cin>>T;

    while(T--)
    {
        long long N,X;
        cin>>N>>X;

        vector<long long>V;

        for(long long v=0;v<N;v++)
        {
            long long inp;
            cin>>inp;
            V.push_back(inp);
        }

        int sign = 0;

        for(long long v=0;v<N;v++)
        {
            if(V[v] >= X)
            {
                sign = 1;
                break;
            }
        }

        if(sign == 1)
            cout<<"YES"<<endl;

        else
            cout<<"NO"<<endl;
    }

    return 0;
}