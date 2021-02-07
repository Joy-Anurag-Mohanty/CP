#include<bits/stdc++.h>
using namespace std;
#define ll long long 

void solve()
{
    int N;
    cin>>N;

    string S;
    cin>>S;

    //cout<<S<<endl;

    int size = 0;
    string sub = "";

    vector<string>V;

    for(int i = 0 ; i < N; i++)
    {
        if(size <= 3)
        {
            sub += S[i];
            size++;
        }

        else
        {
            //cout<<sub<<endl;
            V.push_back(sub);
            i--;
            size = 0;
            sub = "";
        }
    }

    V.push_back(sub);

    string res = "";

    // for(int i = 0; i < V.size(); i++)
    //     cout<<V[i]<<" ";
    // cout<<endl;

    for(int i = 0; i < V.size(); i++)
    {
        string binString = V[i];

        int dec = stoi(binString,0,2);

        char ch = (char)(dec + 97);

        res += ch;
    }

    cout<<res<<endl;

}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int T;
    cin>>T;

    while(T--)
        solve();

    return 0;
}
