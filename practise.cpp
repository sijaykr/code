#include<bits/stdc++.h>
using namespace std;
int main(){
    int row,col;
    cout<<"please enter the value for row"<<endl;
    cin>>row;
    cout<<"please enter the value for the column "<<endl;
    cin>>col;
    for(int i=1;i<=row;i++){
        
        for(int j=1;j<=i;j++){
            char c ='a'+(j-1);

            cout<<c<<" ";
        }
        cout<<endl;
    }
}
