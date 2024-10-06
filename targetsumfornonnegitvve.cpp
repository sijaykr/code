#include<bits/stdc++.h>
using namespace std;
int find(int arr [],int index,int n,int target){

    //for base case 
    if(index==n){
        if(target==0)
        return 1;
        else 
        return 0;
    }
    //when not included 
   return  find(arr,index+1,n,target)+find(arr,index+1,n,target-arr[index]);

    //when included
      

}
int main(){
    int arr[100];
    int n,t;
    cout<<"please enter the value for the num and targer value ;";
    cin>>n>>t;
    cout<<"please enter the value for the elemnt of the arraY :";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

cout<<find(arr,0,n,t);
}