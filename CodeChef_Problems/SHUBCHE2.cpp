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
    
    int Z;
    cin>>Z;

    int X,Y;

    for(int i = 1;i<Z;i++)
    {
        if((i+Z)==(i^Z))
        {
            X = i;
            break;
        }
    }

    Y = Z+1;

    while((Y+Z)!=(Y^Z))
    {
        Y++;
    }

    cout<<X<<" "<<Y;

    return 0;
}  