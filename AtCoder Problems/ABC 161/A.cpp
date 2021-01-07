#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    vector<int>V(3);

    cin>>V[0]>>V[1]>>V[2];

    int temp = V[0];
    V[0] = V[1];
    V[1] = temp;

    temp = V[0];
    V[0] = V[2];
    V[2] = temp;

    for(int i = 0; i < 3; i++)
        cout<<V[i]<<" ";
    cout<<endl;
}
