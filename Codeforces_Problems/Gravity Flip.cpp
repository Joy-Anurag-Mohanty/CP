#include<iostream>
#include<algorithm>
#include<vector>
 
 
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
 
    int N;
    cin>>N;
 
    vector<int>V;
 
    for(int i = 0;i<N;i++)
    {
        int inp;
        cin>>inp;
        V.push_back(inp);
    }
 
    sort(V.begin(),V.end());
 
    for(int i = 0;i<N;i++)
    {
        cout<<V[i]<<" ";
    }
 
    return 0;
}