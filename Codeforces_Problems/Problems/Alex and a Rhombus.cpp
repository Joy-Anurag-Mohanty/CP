#include<iostream>
#include<cmath>
 
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
 
    if(N == 1)
        cout<<1;
 
    else
    {
        cout<<(int)(pow(N,2) + pow(N-1,2));
    }
 
    return 0;
}
