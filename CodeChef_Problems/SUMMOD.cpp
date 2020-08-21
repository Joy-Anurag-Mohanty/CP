#include <bits/stdc++.h>
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

    long long m  = 1000000007;

    while(T--)
    {
        long long N,sum=0,fact = 1;
        cin>>N;

        for(long long i=1;i<=N;i++)
        {
            fact = fact*i % m;
            sum += fact;
        }

        long long res = sum%m;
        cout<<res<<endl;

    }
   
    return 0;
}