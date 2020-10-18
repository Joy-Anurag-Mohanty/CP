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
    
    int Q;
    cin>>Q;
 
    while(Q--)
    {
        long long N,count = 0;;
        cin>>N;
 
        if(N == 1)
        {
            count = 0;
 
        }
 
        while(N != 1)
        {
            if(N % 5 == 0)
            {
                N = 4*(N/5);
                count++;
            }
 
            else if(N % 3 == 0)
            {
                N = 2*(N/3);
                count++;
            }
 
            else if(N % 2 == 0)
            {
                N = N/2;
                count++;
            }
 
            else
            {
                count = -1;
                break;
            }
        }
 
        cout<<count<<endl;
    }
 
    return 0;
}
