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
    
    long long T;
    cin>>T;

    while(T--)
    {
        long long K;
        cin>>K;

        long long y = K % 1000000007;
        
        long long res = 1,x = 2;
        
        while(y>0)
        {
            if(y&1)
                res = (res * x)%1000000007;
            
            y = y >> 1;
            x = (x*x)%1000000007;
            
        }

        long long ans = (((5*res) % 1000000007)%1000000007);
        
        cout<<ans<<endl;
    }

    return 0;
}