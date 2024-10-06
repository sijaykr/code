#include<bits/stdc++.h>
using namespace std;
int find(int arr[],int n){
    
    for(int i=0;i<n;i++){
        int  num=arr[i];
       int  count=0;
        for(int j=0;j<n;j++){
            if(arr[j]==num){
                count++;
            }

        }
        
        if(count==1)
        return num;
    }
    return 0;
}
int main(){
    int arr[100],n;
    cout<<"please enter the value for the num";
    cin>>n;
    cout<<"please enteer the elemnt for the arry:";
    for(int i=0;i<n;i++){
cin>>arr[i];
    }
cout<<find(arr,n);
}