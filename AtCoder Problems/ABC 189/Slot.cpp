#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    string S;
    cin>>S;

    if(S[0] == S[1]  && S[1] == S[2])
        cout<<"Won"<<endl;
    else
        cout<<"Lost"<<endl;

    return 0;
}
