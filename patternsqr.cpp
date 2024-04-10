#include<bits/stdc++.h>
using namespace std;
int main(){
    int row,col;
    cout<<"please enter the value of row :";
    cin>>row;
    cout<<"please enter the value of column :";
    cin>>col;
    for(int i=1;i<=row;i++){
        for(int j=1;j<=col;j++){
            cout<<j*j<<" ";
        }
        cout<<endl;
    }
}