#include <bits/stdc++.h>
using namespace std;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    #ifndef ONLINE_JUDGE
    freopen("Input.txt", "r", stdin);
    freopen("Output.txt", "w", stdout);
    #endif

    int T;
    cin>>T;

    while(T--)
    {
        int a,N,sum = 0 ;
        cin>>a>>N;

        int k = pow(a,N);
        cout<<k<<endl;

        while(k!=0)
        {
            int temp = k%10;
            sum += temp;
            k = k/10;
        }

        if(sum==2 ||sum==1)
        {
            cout<<1<<endl;    
        }

        bool flag = true;

        for(int i=2;i<=sqrt(sum);i++)
        {
            if(sum%i == 0)
                flag = false;
                break;
        }

        

        if(flag == true)
            cout<<1<<endl;

        else
            cout<<0<<endl;
    }
   
    return 0;
}