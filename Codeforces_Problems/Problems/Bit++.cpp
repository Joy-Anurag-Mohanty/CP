
#include<bits/stdc++.h>
using namespace std;
#define ll long long
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);  
 
    #ifndef ONLINE_JUDGE
    freopen("Input.txt", "r", stdin);
    freopen("Output.txt", "w", stdout);
    #endif  
    
    int N;
    cin>>N;
 
    int x = 0;
 
    while(N--)
    {
        string s;
        cin>>s;
 
        if(s[1] == '+')
            x++;
 
        else
            x--;
    }
 
    cout<<x<<endl;
 
    return 0;
}