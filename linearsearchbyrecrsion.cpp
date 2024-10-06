#include<bits/stdc++.h>
using namespace std;
bool linearsearch(int arr[],int X,int start,int end){
    if(start==end)
    return 0;
    if(arr[start]==X)
    return 1;
    return linearsearch(arr,X,start+1,end);


}
bool binarysearch(int arr[],int start,int end,int x){

    if(start>=end)
    return 0;
    int mid=start -(start-end)/2;
    if(arr[mid]==x){
        return 1;
    }
    else if(arr[mid]<x){
        return binarysearch(arr,mid+1,end,x);
    }
    else 
    return binarysearch(arr,start,mid-1,x);
}
int main(){
    int n,arr[1000],x;
    cout<<"please enter the value for the num  that is the size :";
    cin>>n;
    cout<<"please enter the value fot the nuber to be searched :";
    cin>>x;
    cout<<"please enter the value for the elemnt of array :";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
  int t=  linearsearch(arr,x,0,n);
  if(t>0){
  cout<<"elemnt found in array"<<endl;;
  }
  else {
  cout<<"not found in the list :"<<endl;;}

  int b=binarysearch(arr,0,n,x);
  if(b>0){
    cout<<"elemnt is found by binary search in the givn array :"<<endl;;
  }
  else {
  cout<<"elemnt not found in the given array :"<<endl;
  }

}