#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int T;
    cin>>T;

    while(T--)
    {
        vector<int>V;

        int a,b,c;
        cin>>a>>b>>c;

        V.push_back(a);
        V.push_back(b);
        V.push_back(c);

        sort(V.begin(),V.end());

        int sum = V[0] + V[1];
        
        // cout<<sum<<" "<<V[2]<<endl;

        if(sum == V[2])
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
}