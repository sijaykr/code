#include<bits/stdc++.h>
using namespace std;
bool find(int arr[],int index,int n,int x){
    if(x==0)
    return 1;
    if(index==n||x<1)
    return 0;
    return  find(arr,index+1,n,x)||find(arr,index+1,n,x-arr[index]);

}
int main(){
    int arr[100],n,x;
    cout<<"please enter the value for the size of the array:";
    cin>>n;
    cout<<"pleease enterr the elemnt :";
    for(int i=0;i<n;i++){
        cin>>arr[i];

    }
    cout<<"please enter the value for the target value :";
    cin>>x;
    cout<<find(arr,0,n,x);
} 