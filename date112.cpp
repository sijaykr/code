#include<bits/stdc++.h>
using namespace std;
int main(){
    int row,col,num;
    cout<<"please enter the value for the num :";
    cin>>num;
    for(row=1;row<=num;row++){
        for(col=1;col<=num-row;col++){
            cout<<"   ";
        }
        for(int i=1;i<=row;i++){
            cout<<i<<"  ";
        }
        cout<<endl;
    }
}