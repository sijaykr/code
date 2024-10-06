#include<bits/stdc++.h>
using namespace std;
int main(){
    int i,j,k,num;
    cout<<"please enter the value for the num:";
    cin>>num;
    for(i=1;i<=num;i++){
        for(j=1;j<=num-i;j++){
            cout<<"  ";
        }
        for(k=i;k>=1;k--){
            cout<<k<<" ";
        }
        cout<<endl;
    }
}