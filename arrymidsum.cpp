#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int midsum(vector<int>arr){
    int sum=0,n=arr.size(),prefix=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    for(int i=0;i<n;i++){
    prefix+=arr[i];
    int totalsum=sum-prefix;
    if(prefix==totalsum)
    return prefix;
    }
    return 0;
}
int main(){
    int n;
    cout<<"please enter the value for the num :";
    cin>>n;
    vector<int>v(n);
    cout<<"please enter the value for the array :";
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    cout<<" our half sum is :"<<midsum(v);
}