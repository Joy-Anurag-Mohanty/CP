#include <bits/stdc++.h> 
using namespace std;
#define ll long long 

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
        ll d;
        cin>>d;

        
        cout<<(d%9)+1<<endl;        
    }

    return 0;
}  