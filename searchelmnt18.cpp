#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[100];
    int index=0,x;
    cout<<"please enter the value to be search in an array :";
    cin>>x;
    cout<<"please enter the value for the array :"<<endl;
    for(int i=0;i<=6;i++){
        cin>>arr[i];
    }
    cout<<"our entered array is : ";
for(int i=0;i<=6;i++){
    cout<<arr[i]<<" ";
}
cout<<endl;
for(int i=0;i<=6;i++){
    if(arr[i]==x){
        index=i;
        }
}

if(index!=0)
cout<<"our searched element was at "<<  index<<" ";
else
cout<<"our searched element is not present in the array :";
}