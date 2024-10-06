#include<bits/stdc++.h>
using namespace std;
int main(){
     int col,row;
     cout<<" please enter the value for the col :"<<endl;
     cin>>col;
     cout<<"please enter the value for the row :"<<endl;
     cin>>row;
     for(int i =1; i<=row; i++){
        for(int j=1;j<=col-i;j++){
            cout<<"  ";

        }
        for(int k=1;k<=i;k++){
            cout<<"* ";
        }
        cout <<endl;
     }
}