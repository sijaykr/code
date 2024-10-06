#include<bits/stdc++.h>
using namespace std;
int ansbnrsrch(int arr[],int n,int target){
    int start=0,end=n-1,mid,ans=n;
    while(start<=end){
        mid=start + (end-start)/2;
        if(arr[mid]==target){
            ans=mid;
            break;

        }
        else if(arr[mid]<target)
        start=mid+1;
        else
        ans=mid;
        end=mid-1;
    }

return ans;
}
int main(){
    int n,arr[1000],key;
    cout<<"please enter the numbr of elemnt :";
    cin>>n;
    cout<<"please enter the elemnt in the array :";
    for(int i=0;i<n;i++){
        cin>>arr[i];

    }
    cout<<"please enter the key elemnt :";
    cin>>key;
cout<<ansbnrsrch(arr,n,key);


}