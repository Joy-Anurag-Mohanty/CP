#include <iostream>
using namespace std;

int main()
{
    int t;
    cin>>t; 
    while(t--){
        int A[3], B[3];
        for(int i=0; i<3; i++){
            cin>>A[i];
        }
        for(int i=0; i<3; i++){
            cin>>B[i];
        }
        int a[3], b[3];
        if(A[0]>A[1]) a[0]=1;
        else if(A[0]==A[1]) a[0]=0;
        else a[0]=-1;
        
        if(A[1]>A[2]) a[1]=1;
        else if(A[1]==A[2]) a[1]=0;
        else a[1]=-1;
        
        if(A[2]>A[0]) a[2]=1;
        else if(A[2]==A[0]) a[2]=0;
        else a[2]=-1;
        
        if(B[0]>B[1]) b[0]=1;
        else if(B[0]==B[1]) b[0]=0;
        else b[0]=-1;
        
        if(B[1]>B[2]) b[1]=1;
        else if(B[1]==B[2]) b[1]=0;
        else b[1]=-1;
        
        if(B[2]>B[0]) b[2]=1;
        else if(B[2]==B[0]) b[2]=0;
        else b[2]=-1;
        
        int flag=1;
        for(int i=0; i<3; i++){
            if(a[i]!=b[i]){
                flag=0;
            }
        }
        if(flag==0){
            cout<<"NOT FAIR"<<"\n";
        }
        else{
            cout<<"FAIR"<<"\n";
        }
    }
}