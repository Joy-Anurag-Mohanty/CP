#include<bits/stdc++.h>
using namespace std;
#define ll long long  

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int T;
    cin>>T;

    while(T--)
    {
        int N,K;
        cin>>N>>K;

        string S;
        cin>>S;

        //cout<<N<<" "<<K<<" "<<S<<endl;

        string rep;
        for(int i = 0; i < S.length(); i++)
        {
            if(S[i] == ':')
                rep +=  ':';
            rep += S[i];
        }

        queue<int>ir;
        queue<int>mg;

        int res = 0;

        for(int i = 0; i < rep.length(); i++)
        {
            if(rep[i] == 'I')
            {
                while(!mg.empty() && abs(mg.front() - i) > K)
                    mg.pop();
                
                if(!mg.empty())
                {
                    res++;
                    mg.pop();
                }

                else
                    ir.push(i);
            }

            else if(rep[i] == 'M')
            {
                while(!ir.empty() && abs(ir.front() - i) > K)
                    ir.pop();
                
                if(!ir.empty())
                {
                    res++;
                    ir.pop();
                }

                else
                    mg.push(i);
            }

            else if(rep[i] == 'X')
            {
                while(!mg.empty())
                    mg.pop();
                
                while(!ir.empty())
                    ir.pop();
                
            }
            
        }

        cout<<res<<endl;
    }

    return 0;
}