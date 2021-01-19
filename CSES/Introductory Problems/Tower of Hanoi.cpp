#include<bits/stdc++.h>
using namespace std;
#define ll long long
 
int num = 0; //number of moves
vector<pair<char,char>>V; //from -> to array
 
void towerofhanoi(int N, char from_rod, char to_rod, char aux_rod)
{
    if(N == 1)
    {
        num++;
        V.push_back(make_pair(from_rod,to_rod));
        return;
    }
 
    num++;
 
    towerofhanoi(N - 1, from_rod, aux_rod, to_rod);
 
    V.push_back(make_pair(from_rod,to_rod));
 
    towerofhanoi(N - 1, aux_rod, to_rod, from_rod);
}
 
int main()
{
    int N;
    cin>>N; //number of disks
    
    //cout<<"Number of disks: "<<N<<endl;
 
    towerofhanoi(N,'1','3','2');
 
    cout<<num<<endl;
 
    for(int i = 0; i < V.size(); i++)
        cout<<V[i].first<<" "<<V[i].second<<endl;
 
    return 0;
}
