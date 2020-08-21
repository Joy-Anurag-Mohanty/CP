#include<iostream>
#include<algorithm>
#include<vector>
#include<numeric>
 
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
 
    int x1,y1,x2,y2;
    cin>>x1>>y1>>x2>>y2;
 
    int R,B,K;
 
    //for king
 
    K = max(abs(x1-x2),abs(y1-y2));
 
    //for rook
 
    if(x1 == x2 || y1 == y2)
        R = 1;
    else
        R = 2;
 
    //for bishop
 
    if((x1+y1)%2!=(x2+y2)%2)
        B = 0;
 
    else
    {
        if(x1+y1 == x2+y2 || x1-y1 == x2 - y2)
            B = 1;
        else
            B = 2;
    }
 
    cout<<R<<" "<<B<<" "<<K;         
 
 
    return 0;
}