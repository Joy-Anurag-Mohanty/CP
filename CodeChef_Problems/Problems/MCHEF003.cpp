#include <bits/stdc++.h>
#define ll long long
using namespace std;

int countSetBits(int n) 
{ 
  
    
    n++; 
  
    
    int powerOf2 = 2; 
  
    
    int cnt = n / 2; 
  
    
    while (powerOf2 <= n) { 
  
    
        int totalPairs = n / powerOf2; 
  
    
        cnt += (totalPairs / 2) * powerOf2; 
  

        cnt += (totalPairs & 1) ? (n % powerOf2) : 0; 
 
        powerOf2 <<= 1; 
    } 
  

    return cnt; 
}

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    #ifndef ONLINE_JUDGE
    freopen("Input.txt", "r", stdin);
    freopen("Output.txt", "w", stdout);
    #endif

    int N;
    cin>>N;

    cout<<countSetBits(N)<<endl;
}