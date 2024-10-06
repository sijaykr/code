#include<bits/stdc++.h>
using namespace std;
int minmelemnt(int arr[],int n){
    int start=0,end=n-1,mid,ans=arr[0];
    while(start<=end){
        mid=start+(end-start)/2;
        if(arr[0]<=arr[mid]){
            start=mid+1;

   }
   else
   ans=arr[mid];
   end=mid-1;
    }
    return ans;
}
int main(){
    int n,arr[1000];
    cout<<"please enter the number of elemnt :";
    cin>>n;
    cout<<"please enter the elemnt of array in sorted or rotated manner :";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
cout<<"our least elemnt is :"<<minmelemnt(arr,n);
}