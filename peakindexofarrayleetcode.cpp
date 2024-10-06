#include<bits/stdc++.h>
using namespace std;
int pkindx(int arr[],int n){
    int start=0,end=n-1,mid;
    while(start<=end){
        mid=start +(end-start)/2;
        if(arr[mid]>arr[mid-1]&&arr[mid]>arr[mid+1]){
            return mid;
        }
        else if (arr[mid]>arr[mid-1])
        start=mid+1;
        else
        end=mid-1;
    }
    return -1;
}
int main(){
    int n,arr[1000];
    cout<<"please enter the value for the elemnt of array: ";
    cin>>n;
    cout<<"please enter the element of array :";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<" our finded peak index is :"<<pkindx(arr,n);
}