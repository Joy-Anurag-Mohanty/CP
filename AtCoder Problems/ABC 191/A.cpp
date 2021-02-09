#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int V,T,S,D;
    cin>>V>>T>>S>>D;

    int D1 = T*V;
    int D2 = S*V;

    if(D >= D1 && D <= D2)
        cout<<"No"<<endl;
    else
        cout<<"Yes"<<endl;
}