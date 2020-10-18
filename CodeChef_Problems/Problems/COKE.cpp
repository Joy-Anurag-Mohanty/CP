#include<iostream>
#include<algorithm>
#include<vector>
#include<limits>

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
        int N,M,K,L,R;
        cin>>N>>M>>K>>L>>R;

        vector<int>C;
        vector<int>P;

        for(int i = 0;i<N;i++)
        {
            int p,c;
            cin>>c>>p;
            C.push_back(c);
            P.push_back(p);
        }

        int l = K-1;
        int u = K+1;

        for(int i = 0;i<N;i++)
        {
            int t = 0;

            while(t<M)
            {
                if(C[i]<l)
                    C[i]++;

                else if(l<=C[i] && C[i]<=u)
                    C[i] = K;

                else
                    C[i]--;

                t++;
            }
        }

        vector<int>V;
        int flag = 0;

        for(int i = 0;i<N;i++)
        {
            if(L<=C[i] && C[i]<=R)
            {
                V.push_back(P[i]);
            }
        }

        if(V.size() != 0)
            cout<<*min_element(V.begin(),V.end())<<endl;
        else
            cout<<-1<<endl;
    }

    return 0;
}