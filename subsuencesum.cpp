
#include<bits/stdc++.h>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int n,arr[100], maxi=INT_MIN;
    cout<<"please enter the value for the num :";
    cin>>n;
    cout<<"please enter the vlaue for the elemnt of array :";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
for(int i=0;i<n;i++){
    int sum=0;
    for(int j=i;j<n;j++){
        sum=sum+arr[j];
        maxi=max(maxi,sum);

    }
}
cout<<" ans is :"<<maxi;
    
    }