#include<bits/stdc++.h>
using namespace std;
#define ll long long 

vector<int>printVec(vector<int>V)
{
    for(int i = 0; i < V.size(); i++)
        cout<<V[i]<<" ";
    cout<<endl;
}

vector<int> getInp(vector<int>V, int N)
{
    for(int i = 1; i < N + 1; i++)
    {
        int inp;
        cin>>inp;
        V[i] = inp;
    }

    return V;
}

int maxPages(int N, int X, vector<int>H, vector<int>S)
{
    int dp[N + 1][X + 1];

    for(int i = 0; i <= N; i++)
    {
        for(int j = 0;  j <= X; j++)
        {
            if(j == 0 || i == 0) //no money or no book bought
                dp[i][j] = 0;
            
            else
            {
                int option1 = (i == 1) ? 0 : dp[i - 1][j]; //don't buy book
                int option2 = (j < H[i]) ? 0 : S[i] + dp[i - 1][j - H[i]]; //buy book

                dp[i][j] = max(option1, option2);
            }
        }
    }

    return dp[N][X];
}

int main()
{
    int N,X;
    cin>>N>>X;

    vector<int>H(N + 1); //price of the book
    vector<int>S(N + 1); //pages in each book

    H = getInp(H, N);
    S = getInp(S, N);

    //printVec(H);
    //printVec(S);

    cout<<maxPages(N,X,H,S)<<endl;
    
    return 0;

}
