#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,p;
    cout<<"please enter the value of number :"  ;
    cin>>n;
    cout<<"Please enter the value of power :" ;
    cin>>p;
    int num=n;
    cout<<num <<" " ;
    
    for(int i=1;i<=p;i=i+1){
      num=num*n;
        cout<<num<<" ";

    }
}