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
        vector<int>V;

        for(int v=0;v<3;v++)
        {
            int inp;
            cin>>inp;
            V.push_back(inp);
        }

        sort(V.begin(),V.end());

        V[2] = -V[2];

        if((V[0]+V[1]+V[2])==0)
            cout<<"yes"<<endl;

        else
            cout<<"no"<<endl;
    }

    return 0;
}