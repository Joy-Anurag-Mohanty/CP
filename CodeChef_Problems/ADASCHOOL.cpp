#include<bits/stdc++.h>
using namespace std;

int main()
{
    #ifndef ONLINE_JUDGE
    freopen("Input.txt", "r", stdin);
    freopen("Output.txt", "w", stdout);
    #endif

    int T; //test cases
    cin>>T;

    while(T--)
    {
        int N,M;

        cin>>N>>M;
        
        if((N*M)%2 != 0)
            cout<<"NO"<<endl;

        else
            cout<<"YES"<<endl;
    }

    return 0;
}