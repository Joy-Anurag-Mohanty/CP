#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);  
 
    #ifndef ONLINE_JUDGE
    freopen("Input.txt", "r", stdin);
    freopen("Output.txt", "w", stdout);
    #endif  
    
    long long Q;
    cin>>Q;
 
    while(Q--)
    {
        long long K,N,A,B;
        cin>>K>>N>>A>>B;
 
        long long just_play = 0,count = 0;
 
        if(N*B >= K)
        {
            cout<<-1<<endl;
        }
 
        else
        {
            long long s = (K - N*B - 1)/(A - B);
            s = min(s,N);
            cout<<s<<endl;
        }
    }
 
    return 0;
}