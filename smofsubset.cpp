#include<bits/stdc++.h>
using namespace std;
void print(int arr[],int index,int n,int sm,vector<int>&ans){
    if(index==n){
        ans.push_back(sm);
        return;

    }

    // if not include 
    print(arr,index+1,n,sm,ans);
    // if include
    print(arr,index+1,n,sm=sm+arr[index],ans);

}
int main(){
    int arr[100],n,sm=0;
    cout<<"please enter the value for the num :";
    cin>>n;
    vector<int>ans;
    for(int i=0;i<n;i++){
        cin>>arr[i];

    }
    print(arr,0,n,sm,ans);
    cout<<"our sub set sum is :";
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<endl;


    }

}