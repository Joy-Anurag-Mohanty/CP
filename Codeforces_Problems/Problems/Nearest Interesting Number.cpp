#include<bits/stdc++.h>
using namespace std;
 
int digitsum(int n)
{
    int sum = 0;
 
    while(n != 0)
    {
        sum += n%10;
        n /= 10;
    }
 
    return sum;
}
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);  
 
    #ifndef ONLINE_JUDGE
    freopen("Input.txt", "r", stdin);
    freopen("Output.txt", "w", stdout);
    #endif  
    
    int N,temp;
    cin>>N;
 
    temp = N;
 
    while(digitsum(temp) % 4 != 0)
    {
        N++;
        temp = N;
    }
 
    cout<<N<<endl;
 
    return 0;
}