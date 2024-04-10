#include<bits/stdc++.h>
using namespace std;
int main(){
    int row,col;
    cout<<"please enter the value for row :";
    cin>>row;
    cout<<"please enter the value for column :";
    cin>>col;
    char c;
    cout<<"please enter the character to be print :";
    cin>>c;
    for(int i=1;i<=row;i++){
        for(int j=1;j<=i;j++){
            cout<<c;
        }
        for(int k=1;k<=i;k++){
            cout<<" ";
        }
        cout<<endl;
    }
}
