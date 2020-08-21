#include <bits/stdc++.h> 
using namespace std;
#define ll long long 

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
        int x1,y1,x2,y2;

        cin>>x1>>y1>>x2>>y2;

        if(x1 == x2)
        {
            if(y2>y1)
                cout<<"up"<<endl;

            else
                cout<<"down"<<endl;
        }

        else if(y1 == y2)
        {
            if(x2>x1)
                cout<<"right"<<endl;

            else
                cout<<"left"<<endl;
        }

        else
            cout<<"sad"<<endl;
    }

    return 0;
}  