#include<bits/stdc++.h>
using namespace std;
bool targetsum(int arr[],int index,int n,int target){
    if(target==0){
        return 1;
    }
    // base case
    if(index==n ||target<0)

    return 0;
    //writing the conditon 
    return targetsum(arr,index+1,n,target)||targetsum(arr,index+1,n,target-arr[index]);
}
int main(){
    int arr[100];
    int n,t;
    cout<<"please enter the value for the num:";

    cin>>n;
    cout<<"please enterr the value for the target sum:";
    cin>>t;
    cout<<"please enter the value for the elemnt of the array:";
    for(int i=0;i<n;i++){
        cin>>arr[i];

    }
 cout<<targetsum(arr,0,n,t);

}