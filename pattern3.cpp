#include<bits/stdc++.h>
using namespace std;
int main(){
    /* to print like 1 2 3 4 5 
                     1 2 3 4 5 
                     1 2 3 4 5
                     1 2 3 4 5 */
    int row,col;
    cout<<"please enter the value for row :";
    cin>>row;
    cout<<"please enter the value for column :";
    cin>>col;
    for(int i=1;i<=row;i=i+1){
        for(int j=1;j<=col;j=j+1){
            cout<<j<<" ";

        }
        cout<<endl;
    }
}