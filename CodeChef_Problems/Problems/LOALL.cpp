#include <bits/stdc++.h>
using namespace std;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    #ifndef ONLINE_JUDGE
    freopen("Input.txt", "r", stdin);
    freopen("Output.txt", "w", stdout);
    #endif
    
    
        int N;
        cin>>N;

        vector<int>di;

        for(int i = 0;i<N;i++)
        {
            int inp;
            cin>>inp;
            
            while(inp != 0)
            {
                int temp = inp%10;
                di.push_back(temp);
                inp = inp/10;
            }
        }

        sort(di.rbegin(),di.rend());

        for(int i=0;i<di.size();i++)
        {
            cout<<di[i];
        }

    
  
    return 0;
}