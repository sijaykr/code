#include<bits/stdc++.h>
using namespace std;
int main(){
    int row,col;
    cout<<"please enter the value of row :";
    cin>>row;
    cout<<"please enter the value of column :";
    cin>>col;
    for(int i=1;i<=row;i=i+1){
        for(int j=col;j>=1;j=j-1){
            cout<<j<<" ";

        }
        cout<<endl;
    }
}