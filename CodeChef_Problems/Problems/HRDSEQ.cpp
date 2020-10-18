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

    vector<int>V = {0,0,1,0,2,0,2,2,1,6,0,5,0,2,6,5,4,0,5,3,0,3,2,9,0,4,9,3,6,14,0,6,3,5,15,0,5,3,5,2,17,0,6,11,0,3,8,0,3,3,1,42,0,5,15,20,0,4,32,0,3,11,18,0,4,7,0,3,7,3,2,31,0,6,31,3,6,3,2,8,33,0,9,56,0,3,8,7,19,0,5,37,0,3,8,8,1,46,0,6,23,0,3,9,21,0,4,42,56,25,0,5,21,8,18,52,0,6,18,4,13,0,5,11,62,0,4,7};


    while(T--)
    {
        int N;
        cin>>N;

        N = N - 1;

        int temp = V[N];

        int count = 0;

        for(int i = 0;i<=N;i++)
        {
            if(V[i] == temp)
                count++;
        }

        cout<<count<<endl;
    }

    return 0;
}  