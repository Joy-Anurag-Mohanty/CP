#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    #ifndef ONLINE_JUDGE
    freopen("Input.txt", "r", stdin);
    freopen("Output.txt", "w", stdout);
    #endif

	int T;
    cin>>T;

    while(T--)
    {
        long long N,M;
        cin>>N>>M;

        if((N*M)%2 == 0)
            cout<<"Yes"<<endl;

        else
            cout<<"No"<<endl;
    }

    return 0;
}