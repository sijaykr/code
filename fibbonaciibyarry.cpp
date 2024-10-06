#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,arr[1000];
    cout<<"please enter the value for the num n :";
    cin>>n;
    arr[0]=0,arr[1]=1;
    cout<<"our fibbonacii seris is : 0 1 "; 
    for(int i=2;i<=n-1;i++){
        cout<<( arr[i]=arr[i-1]+arr[i-2] )<<"  ";
    }

}