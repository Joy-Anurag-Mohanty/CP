#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
   int T;
   cin>>T;

   while(T--)
   {
       int N,K;
       cin>>N>>K;

       //cout<<N<<" "<<K<<endl;

       vector<int>V(N);

       for(int i = 0; i < N; i++){
           cin>>V[i];
           //cout<<V[i]<<" ";
       }

       //cout<<endl;

       //check if bot or not

       int unsolved = 0;

       for(int i = 0; i < N; i++){
           if(V[i] == -1){
               unsolved++;
           }
       }

       if(unsolved)
       {
           //not a bot

           //cout<<"Not a bot block"<<endl;

           int solved = N - unsolved;

           //cout<<"Solved : "<<solved<<endl;

           if(solved < ceil(((float)N/2))){
               cout<<"Rejected"<<endl;
               continue;
           }

           //check if she is too slow

           int flag = 0;

           for(int i = 0; i < N; i++){
               if(V[i] > K)
               {
                   flag = 1;
                   break;
               }
           }

           if(flag){
               cout<<"Too Slow"<<endl;
           }
           
           else{
               cout<<"Accepted"<<endl;
           }
       }

       else
       {
            //maybe bot if each question took 1s or less

            //cout<<"Maybe bot block"<<endl;

            int flag = 1;

            for(int i = 0; i < N; i++)
            {
                if(V[i] > 1){
                    flag = 0; //not a bot
                    break;
                }
            }

            if(flag){
                cout<<"Bot"<<endl;
            }

            else{
                //check if she is too slow

                int flag = 0;
                
                for(int i = 0; i < N; i++)
                {
                    if(V[i] > K)
                    {
                        flag = 1;
                        break;
                    }
                }

                if(flag){
                    cout<<"Too slow"<<endl;
                }

                else{
                    cout<<"Accepted"<<endl;
                }
            }
       }
   }
}