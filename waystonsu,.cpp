#include<bits/stdc++.h>
using namespace std;
int way(int arr [],int n,int sum){
    int ans=0;
    // base case 
    if(sum==0)
    return 1;
    if(sum<0)
    return 0;


    
    
    for(int i=0;i<n;i++){
        ans+=way(arr,n,sum-arr[i]);
    }
    return ans;
}
int main(){
    int arr[]={1,5,6};
    int target=7;
    cout<<way(arr,3,7);

}