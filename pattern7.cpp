#include<bits/stdc++.h>
using namespace std;
int main(){
    int col,row;
    cout<<"please enter the value for row :";
    cin>>row;
    cout<<"please enter the value for column :";
    cin>>col;
    for(int i=1;i<=row;i++){
        for(int j=1;j<=col-(i-1);j++){
            cout<< j<<" ";
        }
        cout<<endl;
    }
}