#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[1000],n;
    cout<<"please enter he value for the num :";
    cin>>n;
    cout<<" please enter the value for the array :";
    for(int i=0;i<=n-1;i++){
cin>>arr[i];
    }
    //for rotate array in anti clockwise by 1:
    int temp=arr[n-1];
    for(int i=n-2;i>=0;i--){
        arr[i+1]=arr[i];
    }
    arr[0]=temp;

    // showing the reversed array :
    cout<<"our rotated arra is :"<<endl;
    for(int i=0;i<=n-1;i++){
        cout<<arr[i]<<" ";

    }
}