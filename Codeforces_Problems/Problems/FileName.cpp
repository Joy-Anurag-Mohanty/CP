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
 
    string str;
    cin>>str;
 
    int count = 0,res=0;
 
    for(int i = 0;i<str.size();i++)
    {
        if(str[i] == 'x')
            count++;
 
        else
            count = 0;
 
        if(count>=3)
            res++;
    }
 
    cout<<res;
 
    return 0;
}