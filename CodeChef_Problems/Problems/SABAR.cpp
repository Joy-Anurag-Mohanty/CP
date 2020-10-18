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
        long long a,b,min,max;
        cin>>a>>b;

        long long l = (a>b)?a:b;
        long long s = (a<b)?a:b; 

        max = l+s-1;
        min = l-s+1;

        cout<<max<<" "<<min<<endl; 
    }

    return 0;
}