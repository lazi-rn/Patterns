#include<iostream>
#include<cmath>
using namespace std;
int main (){
    int n;
    cout<<"Enter the dimension of Diamond (INT >3) :";
    cin>>n;
    for(int i=1;i<=n;i++){
        if(i<=(n+1)/2){
            for(int j=i; j<(n+1)/2; j++){
                 cout<<" ";
            }
            if(i==1){
                cout<<"*"<<endl;
            }else{
                cout<<"*";
                for(int j=1;j<=2*i-3;j++){
                    cout<<" ";
                }
                cout<<"*"<<endl;
            }
        }else{
            for(int j=(n+1)/2; j<i; j++){
                cout<<" ";
            }
            if(i==n){
                cout<<"*"<<endl;
            }else{
                cout<<"*";
                for(int j=1;j<=2*(n-i)-1;j++){
                    cout<<" ";
                }
                cout<<"*"<<endl;
            }
        }
    }
    return 0;
}