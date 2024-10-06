#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"plese entr the value for the num";

    cin>>n;
    vector<int> arr(n);
    cout<<"please enter the elemnt "<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];

    }
    int count=0;
    
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++)
        if(arr[i]>2*arr[j])
        count++;
    }
    
    cout<<" our reverse pair is :"<<count;
}t