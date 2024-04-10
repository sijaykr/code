#include<bits/stdc++.h>
using namespace std;
int main(){
    int row,col;
    cout<<"please enter the value for the row: ";
    cin>>row;
    cout<<"please enter the value for the column :";
    cin>>col;
    for(int i=row;i>=1;i--){
        for(int j=1;j<=row-i;j++){
    
            cout<<"  ";
        }
        for(int k=2*i-1;k>=1;k--){
            cout<<"* ";
        }
    
    cout<<endl;

    }

}