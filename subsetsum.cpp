#include<bits/stdc++.h>
using namespace std;
void sumsbst(int arr[],int index,int n,int sum,vector<int> &ans){
    // terminating condition 
    if(index==n){
        ans.push_back(sum);
        return;
    }

    // not included
    sumsbst(arr,index+1,n,sum,ans);
    // whne included 
    sumsbst(arr,index+1,n,sum+arr[index],ans);

}
int main(){
    int arr[100];
    int n;
    cout<<" please enter the value for the num :";
    cin>>n;
    cout<<"please enter the value for the elemnt :";
    for(int i=0;i<n;i++){
        cin>>arr[i];

    }
    vector<int> ans;
    sumsbst(arr,0,n,0,ans);
    cout<<"our subset sum is :"<<endl;;
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<endl;
    }


}