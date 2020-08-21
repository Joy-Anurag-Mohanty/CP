#include<bits/stdc++.h>
using namespace std;
int main()
{
    #ifndef ONLINE_JUDGE
    freopen("Input.txt", "r", stdin);
    freopen("Output.txt", "w", stdout);
    #endif

    long T;
    cin>>T;

    while(T--)
    {
        int X,Y; //X is the points and Y is the matches

        cin>>X>>Y;

        if((X==0) || (X<=Y))
            cout<<0<<endl;
            
        else if(X==2*Y)
            cout<<Y<<endl;
            
        else
        {
            if(X%2 == 0)
                cout<<X-Y<<endl;
            
            else
                cout<<X-Y<<endl;
        }  
    }
    return 0;
}
