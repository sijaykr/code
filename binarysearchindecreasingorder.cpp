#include<bits/stdc++.h>
using namespace std;
int bnrsrch(int arr[],int n,int key){
    int start=0,end=n-1;
    while(start<=end){
        int mid=start +(end-start)/2;
        if(arr[mid]==key){
            return mid;
        }
        else if (arr[mid]<key){
            end=mid-1;
        }
        else
        start=mid+1;
    }
    return 1;
}
int main(){
    int n,key,arr[1000];
cout<<"please enter the number of elemnt :";
cin>>n;
cout<<"please enter the elemnt of array  to be sorted in descreasing order :";
for(int i=0;i<n;i++){
    cin>>arr[i];
}
cout<<"please enter the value to be find int he given array :";
cin>>key;
int index=bnrsrch(arr,n,key);
if(index==-1){
    cout<<"searched elemnt is not found in the array :";
}
else
cout<<"searched element is found at index : "<<index;
}