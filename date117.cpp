#include<bits/stdc++.h>
using namespace std;
int main(){
    int i,j,k,row;
    cout<<"please enter the value for the row :";
    cin>>row;
    for(i=1;i<=row;i++){
        //print star
        for(j=row-(i-1);j>=1;j--){
            cout<<"*";
        }
        //print space
        for(k=1;k<=2*i-2;k++){
            cout<<" ";
        }
        //print star
        for(j=row-(i-1);j>=1;j--){
            cout<<"*";
        }
        
        cout<<endl;
        }
        for(i=1;i<=row;i++){
            //print star
        for(j=1;j<=i;j++){
            cout<<"*";
        }
        // print space
        for(k=2*row-2*i;k>=1;k--){
            cout<<" ";
        }

        //print star
        for(j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}