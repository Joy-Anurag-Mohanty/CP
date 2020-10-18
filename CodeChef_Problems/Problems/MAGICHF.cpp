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

        long long N,X,S; 
        cin>>N>>X>>S;
        long long A,B;

        for(long long i=0;i<S;i++)
        {
            cin>>A>>B;

            if(A == X)
            {
                X = B;
            }

            else if(B == X)
            {
                X = A;
            }
        }

        cout<<X<<endl;
    }    

    return 0;
}