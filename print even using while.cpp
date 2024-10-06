#include<bits/stdc++.h>
using namespace std;
int main(){
    int i=2,n;
    cout<<"please enter the value for the n :";
    cin>>n;
    while(n>0){
        if(n%i==0){
            cout<<n<<"is even number :"<<endl;
        }
        else{
            cout<<n<<"is odd number :";
        }
        n--;
    }

}