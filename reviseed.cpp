#include<bits/stdc++.h>
using namespace std;
void subsequence(int arr[],int index,int n,vector<vector<int> >&ans,vector<int>&temp){

    // terminated condition 
    if(index==n){
        ans.push_back(temp);
        return;
    }
    // we havenot take the subsequnece 
    subsequence(arr,index+1,n,ans,temp);
    /// when we want to include it 
    temp.push_back(arr[index]);
    subsequence(arr,index+1,n,ans,temp);
    temp.pop_back();


}
int main(){
    int arr[100];
    int n;
    cout<<"please enter the vale for the size of array :";
    cin>>n;
    cout<<"please enter the value for the elemnt of the array :";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    vector<vector<int> > ans;
    vector<int>temp;
    cout<<"our subsequnce is "<<endl;
    subsequence(arr,0,n,ans,temp);
    for(int i=0;i<ans.size();i++){
        for(int j=0;j<ans[i].size();j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
int sum=0;
for(int i=0;i<ans.size();i++){
    for(int j=0;j<ans[i].size();j++){
        sum=sum+ans[i][j];
    }
}
cout<<sum;
}