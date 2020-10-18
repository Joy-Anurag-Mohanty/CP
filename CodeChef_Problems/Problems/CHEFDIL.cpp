#include<iostream>
#include<cmath>
#include<algorithm>

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

    int T;
    cin>>T;

    while(T--)
    {
        string S;
        cin>>S;

        ll ones = count(S.begin(),S.end(),'1');
        ll zeros = count(S.begin(),S.end(),'0');

        if(((ones % 2 !=0)&&(zeros % 2 == 0))||((ones % 2 !=0) && (zeros % 2 != 0)))
            cout<<"WIN"<<endl;
        else
            cout<<"LOSE"<<endl;
    }

    return 0;
}