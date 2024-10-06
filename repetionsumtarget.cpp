#include<bits/stdc++.h>
using namespace std;
int subsum(int arr[],int index,int n,int sum){
    // base case 
    if(sum==0)
    return 1;
    if(index==n||sum<0){
        return 0;
    }
    // answer we get 
    return subsum(arr,index+1,n,sum)+subsum(arr,index,n,sum-arr[index]);
}
int main(){
    int arr[100];
    int n,t;
    cout<<"please enter the value for the num and target value :";
    cin>>n>>t;
    cout<<"please enterr the elemnt of the array :";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<subsum(arr,0,n,t);
}