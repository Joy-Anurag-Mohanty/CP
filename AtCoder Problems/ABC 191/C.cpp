#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int H,W;
    cin>>H>>W;

    vector<string>V(H);

    for(int i = 0; i < H; i++)
        cin>>V[i];
    
    int res = 0;

    for(int i = 0; i < H - 1; i++)
    {
        for(int j = 0; j < W -1 ; j++)
        {
            int cnt = 0;
            
            cnt += (V[i][j] == '#');
            cnt += (V[i + 1][j] == '#');
            cnt += (V[i][j + 1] == '#');
            cnt += (V[i + 1][j + 1] == '#');
            res += (cnt == 1||cnt==3);
            
        }
    }

    cout<<res<<endl;
}