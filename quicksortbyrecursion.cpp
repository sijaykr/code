#include<bits/stdc++.h>
using namespace std;
int partiton(int arr [],int start,int end){
    int pos=start;
    for (int i=start;i<=end;i++){
        if(arr[i]<=arr[end]){
            swap(arr[i],arr[pos]);
            pos++;
        }

    }

return pos-1;
}
void quicksort(int arr [],int start,int end){
    if(start>=end){
        return;
    }
    int pivot=partiton(arr,start,end);
    // to go in lefft side 
    quicksort(arr,start,pivot-1);
    // to go in right side 
    quicksort(arr,pivot+1,end);
}
int main(){
    int arr[100],n;
    cout<<"please ente the value for the num that is the size of array :";
    cin>>n;
    cout<<"please enter the value for the elemnt of the array :";
    for(int i=0;i<n;i++){
        cin>>arr[i];

    }

quicksort(arr,0,n-1);
for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}
}