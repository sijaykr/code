#include<bits/stdc++.h>
using namespace std;
int main(){
    int row,col;
    cout<<"please enter the value for row :";
    cin>>row;
    cout<<"please enter the value for the column :";
    cin>>col;
    for(int i=1;i<=row;i++){
        for(int j=1;j<=col;j++){
            cout<<(i-1)*5 +j<<" ";

        }

        cout<<endl;
    }
}