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
 
    int n,c=1;
cin>>n;
while(n-(c*(c+1))/2>=0)
{
n-=(c*(c+1))/2;
c++;
}
cout<<c-1;  
 
    return 0;
}
