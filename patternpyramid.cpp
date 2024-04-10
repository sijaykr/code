#include<bits/stdc++.h>
using namespace std;
int main(){
    int row,col;
    cout<<"please enter the value for the row:";
    cin>>row;
    cout<<"please enter the value for the column :";
    cin>>col;
    char c; 
    cout<<"please enter the character  for  the print :";
    cin>>c;
    for(int i=1;i<=row;i++){
        for(int j=1;j<row-i;j++){
            cout<<"  ";
        }
        for(int k=1;k<=2*i-1;k++){
            cout<<c;

        }
        cout<<endl;
    }
}