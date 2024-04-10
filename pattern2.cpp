#include<bits/stdc++.h>
using namespace std;
int main(){
    int row,col;
    
    cout<<"please enter the value for row: ";
    cin>>row;
    cout<<"please enter the value for column : ";
    cin>>col;
    /* we have to print like  1 1 1 1 1
                               2 2 2 2 2 
                               3 3 3 3 3 */
                               for(int i=1;i<=row;i=i+1){
                                for(int j=1;j<=col;j=j+1){
                                    cout<<i<<" ";
                                }
                                cout<<endl;
                               }
}