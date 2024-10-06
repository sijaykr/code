#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,arr[1000];
    cout<<"please enter the size of array :";
    cin>>n;
    cout<<"please enter the element of array :";
    for(int i=0;i<=n-1;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        for(int j=i;j>=1;j--){
            if(arr[j]<arr[j-1]){
                swap(arr[j],arr[j-1]);
            }
            else 
            break;
        }
    }
    cout<<"our srted arry is :";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}