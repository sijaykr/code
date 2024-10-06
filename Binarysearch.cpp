#include<bits/stdc++.h>
using namespace std;
int Bnrsrch(int arr[],int n,int key){
    int start=0,end=n-1;
    while(start<=end){
int mid=start +(end-start)/2;
if(arr[mid]==key){
    return mid;
}
else if(arr[mid]<key){
    start=mid+1;
}
else 
end=mid-1;

    }
    return -1;

}

int main(){
    int key,n,arr[1000];
    cout<<"please enter the number of element in array :";
    cin>>n;
    
    cout<<"please enter the element for array in sorted manner  :";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

cout<<"please enter the elememnt to be search :";
cin>>key;
int index=Bnrsrch(arr,n,key);

if(index==-1){
    cout<<"element is not present in the array at any index :";
}
else
cout<<"elemnt is found at index "<<index;
}