#include<bits/stdc++.h>
using namespace std;
int main(){
    int i,j,k,row;
    cout<<"please enter the value for the row :";
    cin>>row;
    for(i=1;i<=row;i++){
        for(j=1;j<=i;j++){
            cout<<"*";
        }
        for(k=2*row-2*i;k>=1;k--){
            cout<<" ";
        }
        for(j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    for(i=1;i<=row;i++){
        for(j=row-i;j>=1;j--){
            cout<<"* ";
        }
        for(k=1;k<=2*i;k++){
            cout<<" ";
        }
        for(j=row-i;j>=1;j--){
            cout<<"* ";
        }
        cout<<endl;
    }
}