#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,sum=0,arr[100];
    cout<<"please enter the value for the num:";
    cin>>n;
    cout<<"please enter the value for the array:";
    for(int i=0;i<n-1;i++){
        cin>>arr[i];
    }
for(int i=0;i<n-1;i++){
    sum=arr[i]+sum;
}
cout<<"our sum of array is :"<<sum<<endl;
int sumn=n*(n+1)/2;
int ans=sumn-sum;
cout<<"sum of n number is :  "<<sumn<<endl;
cout<<"our missing element from the array is :"<< ans;
}