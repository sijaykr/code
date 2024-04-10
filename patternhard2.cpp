#include<bits/stdc++.h>
using namespace std;
int main(){
    int row,col;
    cout<<"please enter the value for row :";
    cin>>row;
    cout<<"please enter the value for column :";
    cin>>col;
    for(int i=1;i<=row;i++){

    for(int j=i;j>=1;j--){
cout<<j<<" ";
    }
    cout<<endl;
    }

}