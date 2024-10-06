#include<bits/stdc++.h>
using namespace std;
void subsequence(int arr[],int index,int n,vector<int> temp,vector<vector<int> >&ans){
if(index==n){
    ans.push_back(temp);
    return ;
}
//if we are  not taking then 
subsequence(arr,index+1,n,temp,ans);
// when include 
temp.push_back(arr[index]);
subsequence(arr,index+1,n,temp,ans);

}
int main(){
    int arr[100],n;
    cout<<"pleas eneter the value for the num that is the size of the array ;";
    cin>>n;
    cout<<"please enter the value fot the elemnt :";

    for(int i=0;i<n;i++){
        cin>>arr[i];

    }

    vector<vector<int> > ans;
    vector<int> temp;
    subsequence(arr,0,n,temp,ans);
    for(int i=0;i<ans.size();i++){
        for(int j=0;j<ans[i].size();j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
}