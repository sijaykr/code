#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,arr[1000],maxi=INT_MIN,prefix=0;
    cout<<"pleasse enter the value for the num :";
    cin>>n;
    cout<<"please enter the value for the elemnt of array :";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
for(int i=0;i<n;i++){
    prefix=prefix+arr[i];
    maxi=max(prefix,maxi);
    if(prefix<0){
        prefix=0;
    }
}
cout<<" ans is ::"<<maxi;
}