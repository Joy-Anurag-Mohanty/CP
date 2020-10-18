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
        long long N,B,M,time = 0;
        cin>>N>>B>>M;

        while(N != 0)
        {
            if(N%2 == 0)
            {
                time += (N/2)*M + B;
                N = N/2;
                M = M*2;
            }

            else
            {
                time += ((N+1)/2)*M + B;
                N = (N - 1)/2;
                M = M*2;
            }
        }

        cout<<time-B<<endl;
    }

    return 0; 
}