#include<bits/stdc++.h>
using namespace std;
int main(){
    int col,row;
    cout<<"please enter the value for the row:";
    cin>>row;
    cout<<"please enter the value for the column :";
    cin>>col;
    for(int i=1;i<=row;i++){
        for(int j=1;j<=row-i;j++){
            //to be print space 
            cout<<"  ";
            }
            for(int k=1;k<=i;k++){
                // to be print number 
                cout<<k<<" ";

            
        }
        cout<<endl;
    }
}