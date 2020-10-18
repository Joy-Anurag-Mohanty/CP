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

    int T;
    cin>>T;

    while(T--)
    {
        long long N;
        cin>>N;

        vector<long long>V;
        vector<long long>freq;

        for(long long i=0;i<N;i++)
        {
            long long inp;
            cin>>inp;
            V.push_back(inp);
        }

        unordered_map<long long,long long>mp;

        for(long long i=0;i<N;i++)
        {
            mp[V[i]]++;
        }

        for(auto x : mp)
        {
            freq.push_back(x.second);
        }

        if(N%2 == 0)
        {
            string str = "YES";

            for(long long i=0;i<freq.size();i++)
            {
                if(freq[i] % 2 !=0)
                {
                    str = "NO";
                    break;
                }
            }

            cout<<str<<endl;
        }

        else
        {
            long long count_odd = 0, count_even = 0;

            for(long long i=0;i<freq.size();i++)
            {
                if(freq[i] % 2 == 0)
                {
                    count_even++;
                }

                else
                    count_odd++;
            }

            if(count_odd == 1 && count_even == freq.size() - 1)
                cout<<"YES"<<endl;

            else
                cout<<"NO"<<endl;
        }
    }
   
    return 0;
}