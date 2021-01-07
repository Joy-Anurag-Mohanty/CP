#include<bits/stdc++.h>
using namespace std;
#define ll long long

double N,M,sum = 0;
vector<double>votes;

double items_selected(double lim)
{
    double cnt = 0;

    for(double i = 0; i < N; i++)
    {
        if(votes[i] >= lim)
            cnt++;
    }

    return cnt;
}

int main()
{
     cin>>N>>M;

     for(double i = 0; i < N; i++)
     {
         double inp;
         cin>>inp;
         votes.push_back(inp);

         sum += inp;
     }

     double lim = ((1/(4*M))*sum);

     //cout<<lim<<endl;

    double c = items_selected(lim);

     if(c >= M)
         cout<<"Yes"<<endl;
     else
         cout<<"No"<<endl;
}
