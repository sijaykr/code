#include<bits/stdc++.h>
using namespace std;
void fun(int a[],int n){
    for( int i=0;i<=n-1;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    cout<<sizeof(a);

}
int main(){
    int arr[100],n;
    cout<<"please enter the value for the num: ";
    cin>>n;
    cout<<" please enter the value for the array :";
    for(int i=0;i<=n-1;i++){
        cin>>arr[i];
    }
    cout<<sizeof(arr)<<endl;
    fun(arr,n);
    
}