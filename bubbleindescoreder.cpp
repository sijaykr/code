#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,arr[1000];
    cout<<"please enter the size of array :";
    cin>>n;
    cout<<"please enter the element of array :";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
for(int j=n-2;j>=0;j--){
    bool swapped =0;
    for(int i=0;i<=j;i++){
        if(arr[i]<arr[i+1]){
            swap(arr[i],arr[i+1]);
            swapped=1;
        }

    }
    if(swapped==0)
    break;
}
cout<<"our sorted array is :"<<endl;
for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}
}