#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,arr[1000];
cout<<"please enter the value for the size of arraY :";
cin>>n;
cout<<"please enter the element for the array :";
for(int i=0;i<n;i++){
    cin>>arr[i];

}
for(int i=0;i<n;i++){
    for(int j=n-1;j>i;j--){
        if(arr[j]<arr[j-1]){
            swap(arr[j],arr[j-1]);
        }
        else 
        break;
        
    }
}
cout<<"our sortd array is:";
for(int i=0;i<=n-1;i++){
    cout<<arr[i]<<" ";
}
}