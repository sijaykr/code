#include<bits/stdc++.h>
using namespace std;
int findelmnt(int arr[],int n,int target){

    int start=0,end=n-1,ans=-1,mid;
    while(start<=end){
        mid=start+(end-start)/2;
        // find my elemnt 
        if(arr[mid]==target){
            return ans=mid;
        }
        ///// left side sorted 
        else if(arr[mid]>=arr[0]){
            if(arr[0]<=target&& target<=arr[mid]){
                end=mid-1;
            }
            else
            start=mid+1;
        }
        ///right side sorted///
        else
        if(arr[mid]<=target && target <=arr[end] )
        start=mid+1;
        else
        end=mid-1;
    }
    return ans;
}
int main(){
    int n,key,arr[1000];
    cout<<"please enter the value for the number of elemnt :";
    cin>>n;
    cout<<"please enter the value for the elemnt of array:";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"please enter the valu for the key elemnt :";
    cin>>key;

    cout<<"our serched elemnt is at :"<<findelmnt(arr,n,key);
}