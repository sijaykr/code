#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,d,n;
    cout<<"please enter the first term of a.p. ::"  ;
    cin>>a;
    cout<<"please enter the common difference " ;
    cin>>d;
    cout<<"please enter the last  terms  ;"  ;
    cin>>n;
    for(int i=a;i<=n;i=i+d){
        cout<<i<<" ";
    }
}