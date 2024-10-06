#include<bits/stdc++.h>
int frstbnrsysercrh(int arr[],int n,int key){
    int frst=-1, start=0,end=n-1,mid;
while(start<=end){
    mid=start +(end-start)/2;
    if(arr[mid]==key){
        frst=mid;
        end=mid-1;
    }
    else if(arr[mid]<key){
        start=mid+1;
    }
    else
    end=mid-1;
}

return frst;
}
int lsttbnrsysercrh(int arr[],int n,int key){
    int lst=-1, start=0,end=n-1,mid;
while(start<=end){
    mid=start +(end-start)/2;
    if(arr[mid]==key){
        lst=mid;
        start=mid+1;
    }
    else if(arr[mid]<key){
        start=mid+1;
    }
    else
    end=mid-1;
}

return lst;
}

using namespace std;
int main(){
    int n,arr[100],key;
    cout<<"please enter the value for the numebr of elemnt :";
    cin>>n;
    cout<<"please enter the element in the arraY to be in sorted in increasing order  ;";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"please enter the value for the key elemnt :";
    cin>>key;
    cout<<frstbnrsysercrh(arr,n,key)<< " "<<lsttbnrsysercrh(arr,n,key);
}