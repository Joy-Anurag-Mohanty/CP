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
    
     int t;
    long long int n,i,k,j,s,x;
    cin>>t;
    while(t--)
    {
        s=0;
        cin>>n;
        long long int a[n],b[n];
        i=0;j=n-1;
        for(k=0;k<n;k++)
        {
            cin>>x;
            if(x%2==0)
            {
                a[i]=x;
                i++;
            }
            else 
            {
                a[j]=x;
                j--;
            }
        }
        i=0;
        j=n-1;
       for(k=0;k<n;k++)
        {
            cin>>x;
            if(x%2==0)
            {
                b[i]=x;
                i++;
            }
            else 
            {
                b[j]=x;
                j--;
            }
        }
        for(i=0;i<n;i++)
        {
            s=s+(a[i]+b[i])/2;
        }
     cout<<s<<endl;
    }
    return 0;
}