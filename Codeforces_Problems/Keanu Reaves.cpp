#include<iostream>
#include<cstring>
 
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
 
    int N,one = 0,zero = 0;
    string S;
    cin>>N;
    cin>>S;
 
    for(int i=0;i<N;i++)
    {
        if(S[i]=='1')one++;
        else zero++;
    }
 
    if(zero!=one){
        cout<<1<<endl<<S;
    }
    else{
        
        cout<<2<<endl<<S[0]<<' '<<S.substr(1);
    }
 
    return 0;
}