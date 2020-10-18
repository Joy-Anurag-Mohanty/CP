#include<bits/stdc++.h>
using namespace std;

int main()
{
    #ifndef ONLINE_JUDGE
    freopen("Input.txt", "r", stdin);
    freopen("Output.txt", "w", stdout);
    #endif

    int t=1;
    cin>>t;
    while(t--)
    {
        int n,f=1;
        cin>>n;
        string s[n];
        for(int i=0;i<n;i++)
            cin>>s[i];
        for (int i=0;i<n-1;i++)
            if (s[i]=="cookie" && s[i+1]=="cookie")
                f=0;
        if(s[n-1]=="cookie")
            f=0;
        if(f)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    
    }
    return 0;
}