#include<bits/stdc++.h>
using namespace std;
#define ll long long

map<string,int>freq1; //strings without !
map<string,int>freq2; //strings with !

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int N;
    cin>>N;

    for(int i = 0; i < N; i++)
    {
        string S;
        cin>>S;

        if(S[0] != '!')
            freq1[S]++;

        else if(S[0] == '!')
        {
            string temp = "";

            for(int j = 1; j < S.length(); j++)
                temp += S[j];

            freq2[temp]++;
        }
    }

    for(auto x : freq1)
    {
        if(freq2[x.first] >= 1)
        {
            cout<<x.first<<endl;
            exit(0);
        }
    }

    cout<<"satisfiable"<<endl;

    return 0;
}