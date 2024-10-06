#include<bits/stdc++.h>
using namespace std;
int main(){
    int row ,col;
    cout<<"please enter the value for the row :"<<endl;
    cin>>row;
    cout<<"please enter the value for the column :"<<endl;
    cin>>col;
    for(int i=1;i<=row;i++){
        for(int j=col;j>=col-(i-1);j--){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}