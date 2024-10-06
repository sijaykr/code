#include<bits/stdc++.h>
using namespace std;
int main(){
    int i,j,k,row;
    cout<<"please enter the value for the row :";
    cin>>row;
    for(i=1;i<=row;i++){
        //space
        for(j=row-i;j>=1;j--){
            cout<<" ";
        }
        for(k=1;k<=i;k++){
            cout<<"* ";
        }
        cout<<endl;

    }
    for(i=1;i<=row;i++){
        for(j=1;j<=i-1;j++){
            cout<<" ";
        }
        for(k=row-i+1;k>=1;k--){
            cout<<"* ";
        }
        cout<<endl;
    }
}