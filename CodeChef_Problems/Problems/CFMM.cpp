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
        int N;
        cin>>N;

        int count[6]={0};
        vector<string>str;

        for(int i=0;i<N;i++)
        {
            string s;
            cin>>s;
            str.push_back(s);
        }

        for(int i=0;i<N;i++)
        {
            int c=0;
            int o=0;
            int d=0;
            int e=0;
            int h=0;
            int f=0;

            for(int j=0;j<str[i].length();j++)
            {
                if(str[i][j]=='c')
                {
                    c++;
                    count[0]++;
                }

                if(str[i][j]=='o')
                {
                    c++;
                    count[1]++;
                }

                if(str[i][j]=='d')
                {
                    c++;
                    count[2]++;
                }

                if(str[i][j]=='e')
                {
                    c++;
                    count[3]++;
                }

                if(str[i][j]=='h')
                {
                    c++;
                    count[4]++;
                }

                if(str[i][j]=='f')
                {
                    c++;
                    count[5]++;
                }
            }
        }

        count[0] = count[0]/2;
        count[3] = count[3]/2;

        vector<int> V (count,count+6);

        cout<<*min_element(V.begin(),V.end())<<endl;
    }
    
    return 0;
}