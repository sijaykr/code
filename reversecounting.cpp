#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,l;
    cout<<"please enter the staring value "  ;
    cin>>n;
    cout<<"please enetr the last value to be reversed ::" ;
    cin>>l;
    cout<<"our reversed value is ::"  ;
    for(int i=n;i>=l;i--){
        cout<<i<<" ";
    }
}
