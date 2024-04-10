#include<bits/stdc++.h>
using namespace std;
int main(){
    int row,col;
    cout<<"please enter the value for the row :";
    cin>>row;
    cout<<"please enter the value for the column :";
    cin>>col;
    for(int i=row;i>=1;i--){
        for(int j=1;j<=i;j++){
            cout<<"* ";

        }
        for(int j=1;j<=2*row -2*i;j++){
            cout<<"  ";
        }
        for(int j=1;j<=i;j++){
            cout<<"* ";
        }
        cout <<endl;
    }
    for(int i=1;i<=row;i++){
        for(int j=1;j<=i;j++){
            cout<<"* ";

        }
        for(int j=1;j<=2*row -2*i;j++){
            cout<<"  ";
        }
        for(int j=1;j<=i;j++){
            cout<<"* ";
        }
        cout <<endl;
    }
}