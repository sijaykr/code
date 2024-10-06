#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,start=0,arr[100];
    cout<<"please enter the value for the num:";
    cin>>n;
    int last=n-1;
    cout<<"please enter the value for the array :";
        for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"our entered array is :"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
while(start<last){
    swap(arr[start],arr[last]);
    start++;
    last --;

}
cout<<"our reversed array is :"<<endl;
for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}

}