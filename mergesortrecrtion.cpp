#include<bits/stdc++.h>
using namespace std;
void merge(int arr[],int start,int mid,int end){
    vector<int>temp(end-start+1);
    int index=0,left=start,right=mid+1;
    
    while(left<=mid&&right<=end){
/// sort for left side 
if(arr[left]<=arr[right]){

    temp[index]=arr[left];

    index++;
    left++;
}
// sort for right side 
else {
    temp[index]=arr[right];
    index++;
    right++;
}
    }
    // agr left wale remain ho gye he to
while(left<=mid){
    temp[index]=arr[left];
    index++;
    left++;
}
while(right<=end){
    temp[index]=arr[right];
    index++;
    right++;
}
index=0;
while(start<=end){
    arr[start]=temp[index];
    start++;
    index++;
}

    
    

}
void mergsort(int arr[],int start,int end){
    if(start==end){
        return;
    }
    int mid=start+(end-start)/2;
    // merfe for left side
    mergsort(arr,start,mid);
    // merge for right side 
    mergsort(arr,mid+1,end);
    merge(arr,start,mid,end);

}
int main(){
    int arr[1000],n;
    cout<<"please enter the value of size for the array :";
    cin>>n;
    cout<<"please enter the elemnt in the array ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    mergsort(arr,0,n-1);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}