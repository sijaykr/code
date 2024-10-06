#include<bits/stdc++.h>
using namespace std;
int countnum(int arr[],int n,int key){

    int first=-1,last=-1, start=0,end=n-1,mid;
    // first occurence ///
    while(start<=end){
mid=start +(end-start)/2;
if(arr[mid]==key){
    first =mid;
    end=mid-1;

}
else if( arr[mid]<key){
    start=mid+1;
}
else 
end=mid-1;


    }
    //// find last occurence ///
    start=0,end=n-1;
    while(start<=end){
        mid=start + (end-start)/2;
        if(arr[mid]==key){
            last=mid;
            start=mid+1;

        }
        else if (arr[mid]<key){
            start=mid+1;
        }
        else 
        end=mid-1;
    }

if(first== -1|| last== -1){
    return 0;
}
else 
return (last-first)+1;

}


int main(){
    int key, n,arr[1000];
    cout<<"please enter the value of number of element :";
    cin>>n;
    cout<<"please enter the value for the element of array :";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"please enter the value for the key:";
    cin>>key;
    int occurnece=countnum(arr,n,key);
    if(occurnece>0)
    cout<<"our occurence is :"<<occurnece<<endl;
    else
    cout<<"key is not present in the arry :";
    return 0;

}