
#include<iostream>
using namespace std;
int main(){
    int i,j,n;
   n=9;
   for(i=1;i<=n;i++){
    for(j=1;j<=i;j++){
        if(j>=n-i+1 && j<=n+i-1)
        cout<<"^";
        else cout<<" ";
    }

    
    for(j=1;j<=i;j++){
        if(j>=n-i+1 && j<=n+i-1)
        cout<<"^";
        else cout<<" ";
    }
    cout<<endl;
    }
    cout<<"****Prashamsa****"<<endl;;
n=9;
    for(i=n;i>=1;i--){
        for(j=1;j<=n+i;j++){
            if(j>=n+1-i && j<=n+i-1){
                cout<<"^";}
                else cout <<" ";
            
            
        }
        cout<<endl;
    }
    }
   