#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,arr[1000];
    cout<<"please enter the size of array :";
    cin>>n;
    cout<<"please enter element of array :";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=n-1;i>=0;i--){
        int index=i;
        for(int j=i-2;j>=0;j--){
            if(arr[j]>arr[index])
            index=j;

        }
        swap(arr[i],arr[index]);

    }
    cout<<"our sorted array is :";
    for(int i=0;i<n-1;i++){
        cout<<arr[i]<<" ";
    }
}