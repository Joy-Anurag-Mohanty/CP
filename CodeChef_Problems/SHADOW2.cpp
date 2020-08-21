#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);  

    int T;
    cin>>T;

    while(T--)
    {
        long long n,k;
        cin>>n>>k;

        vector<long long>P;

        for(long long i = 0;i<n;i++)
        {
            long long inp;
            cin>>inp;
            P.push_back(inp);
        }

        long long current_xor = 0;
        for(long long i = 0;i<k;i++)
        {
            current_xor = current_xor^P[i];
        }

        long long max_xor = current_xor;

        for(long long i = k;i<n;i++)
        {
            current_xor = current_xor^P[i-k];
            current_xor = current_xor ^ P[i];
            max_xor = max(max_xor, current_xor);
        }

        cout<<max_xor<<endl;
    }

    return 0;
}