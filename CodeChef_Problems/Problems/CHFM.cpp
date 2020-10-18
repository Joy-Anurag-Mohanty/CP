#include<bits/stdc++.h>
using namespace std;
#define ll long long

bool checkIsAP(vector<ll>arr, ll n) 
{ 
  if (n == 1) 
    return true; 
  

  sort(arr.begin(),arr.end()); 
  
  ll d = arr[1] - arr[0]; 
  for (ll i=2; i<n; i++) 
    if (arr[i] - arr[i-1] != d) 
      return false; 
  
  return true; 
} 

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
        ll N;
        cin>>N;

        vector<ll>C;

        for(ll i = 0;i<N;i++)
        {
            ll inp;
            cin>>inp;
            C.push_back(inp);
        }

        if(adjacent_find(C.begin(),C.end(),not_equal_to<>()) == C.end())
        {
            cout<<1<<endl;
        }

        else
        {

        if(checkIsAP(C,N) && N%2 != 0)
            {
                vector<ll>V(C.begin(),C.end());
                ll ind = ceil(N/2);

                sort(V.begin(),V.end());
                ll key = V[N/2];

                vector<ll>::iterator itr = find(C.begin(),C.end(),key);
                cout<<distance(C.begin(),itr)+1<<endl;
            }

        else
        {
            double mean = (double)accumulate(C.begin(),C.end(),0)/N;

            ll index,flag = 0;

            for(ll i = 0;i<N;i++)
            {
                if(C[i] - mean == 0)
                {
                    index = i;
                    flag = 1;
                    break;
                }
            }   

            if(flag)
                cout<<index + 1<<endl;

            else
                cout<<"Impossible"<<endl;
        }
        }
    }

    return 0;
}