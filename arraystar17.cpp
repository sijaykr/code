#include<bits/stdc++.h>
using namespace std;
int main(){
    cout<<"please enter the value for the array :";
    int arr[1000];
    for(int i=0;i<10;i++){
        cin>>arr[i];
    }
    cout<<"our enterd array is :";
    for(int i=0;i<10;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    int ans=INT_MAX;
    for(int i=0;i<10;i++){
        if(arr[i]<ans){
            ans=arr[i];
        }
    }
        cout<<"our minimum element from given array is :"<<ans<<endl;
        int ans1=INT_MIN;
        for(int i=0;i<10;i++){
            if(arr[i]>ans1){
                ans1=arr[i];
            }
        }
        cout<<"our maxium element from given array is :"<<ans1<<endl;
        int sum=0;
        for(int i=0;i<10;i++){
            sum=sum+arr[i];
        }
        cout<<"sum of given array is :"<< sum;
    
}
