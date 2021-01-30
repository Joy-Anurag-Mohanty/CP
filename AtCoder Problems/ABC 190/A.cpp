#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int A,B,C;
    cin>>A>>B>>C; //Takahashi , Aoki

    if(A == B)
    {
        if(C == 0)
            cout<<"Aoki"<<endl;
        else
            cout<<"Takahashi"<<endl;
    }

    else if(A > B)
        cout<<"Takahashi"<<endl;
    
    else if(A < B)
        cout<<"Aoki"<<endl;
}