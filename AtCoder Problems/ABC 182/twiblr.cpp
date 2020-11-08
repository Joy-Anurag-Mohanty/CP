#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int A,B;
    cin>>A>>B;

    int m = 2*A + 100;

    cout<<abs(m - B)<<endl;

    return 0;
}