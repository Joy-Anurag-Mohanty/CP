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
        long long N;
        cin>>N;

        long long i;

        long long temp = N;
        long long sum = 0;

        while(temp!=0)
        {
            sum = sum + temp%10;
            temp = temp/10;
        }
        
        for(i = 0; i<=9;i++)
        {
            if((sum + i)%10 == 0)
                break;
        }

        cout<<N<<i<<endl;    
    }

    return 0;
}