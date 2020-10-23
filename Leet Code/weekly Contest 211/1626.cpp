#include<bits/stdc++.h>
using namespace std;

class Solution 
{
    vector<pair<int,int>>V; //score - age

    void display()
    {
        for(int i = 0; i < V.size(); i++)
            cout<<V[i].first<<" "<<V[i].second<<endl;
    }

    public:

    int bestTeamScore(vector<int>& scores, vector<int>& ages) 
    {
        int max_score = 0, N = scores.size();

        if(N == 1)
            return scores[0];

        for(int i = 0; i < N; i++)
            V.push_back(make_pair(ages[i], scores[i]));

        sort(V.begin(),V.end(), greater<>());

        vector<int>dp(N);

        for(int i = 0; i < N; i++)
        {
            int score = V[i].second;
            dp[i] = score;

            for(int j = 0; j < i; j++)
            {
                if(V[j].second >= V[i].second)
                    dp[i] = max(dp[i], dp[j] + score);
            }

            max_score = max(max_score,dp[i]);
        }

        return max_score;
    }
};

int main()
{
    Solution ob;

    string score_s,age_s;

    vector<int>scores, ages;

    cin>>score_s>>age_s;

    stringstream ss(score_s);

    for(int i; ss >> i;)
    {
        scores.push_back(i);

        if(ss.peek() == ',')
            ss.ignore();
    }

    stringstream ss_new(age_s);

    for(int i; ss_new >> i;)
    {
        ages.push_back(i);

        if(ss_new.peek() == ',')
            ss_new.ignore();
    }

    cout<<ob.bestTeamScore(scores,ages)<<endl;
}