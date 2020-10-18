#include<bits/stdc++.h>
using namespace std;

int main()
{
	#ifndef ONLINE_JUDGE
    freopen("Input.txt", "r", stdin);
    freopen("Output.txt", "w", stdout);
    #endif


	long long int t, i;
    cin >> t;
    for(i=1; i<=t; i++)
    {
        long long int count=0, max=0, j, y;
        for(j=1; j<=30; j++)
        {
            cin >> y;
            if(y == 1)
            {
                count = count + 1;
            }
        
            else
            {
                if(count > max){
                    max = count;
                }
                count = 0;
            }
        }
        if(count > max){
            max = count;
        }
        if(max > 5){
            cout<<"#coderlifematters"<<endl;
        }
        else{
            cout<<"#allcodersarefun"<<endl;
        }
    }
	// your code goes here
	return 0;
}