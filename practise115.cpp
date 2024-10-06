#include<bits/stdc++.h>
using namespace std;
int main(){
    int i,j,num;
    cout<<"please enter the value for the num :";
    cin>>num;
    for(i=1;i<=num;i++){
        for(j=1;j<=num-i;j++){
            cout<<"  ";
        }
        for(int k=1;k<=2*i-1;k++){
            cout<<"* ";
        }
        cout<<endl;
    }
}