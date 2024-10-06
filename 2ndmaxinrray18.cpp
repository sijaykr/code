#include<bits/stdc++.h>
using namespace std;
int main(){
    int firstmax=-1,scnmax=-1,arr[100],n;
    cout<<"please enter the value for the num :";
    cin>>n;
    for(int i=0;i<n-1;i++){
cin>>arr[i];
   }
   
   //largest elemnt 
for(int i=0;i<n-1;i++){
    if(arr[i]>firstmax)
    firstmax=arr[i];

}
cout<<"our largest element from the given array is :"<<firstmax<<endl;
/// second largest element 

for(int i=0;i<n-1;i++){
    if(firstmax!=arr[i]){
        scnmax=max(arr[i],scnmax);
    }

}
cout<<"our second largest element in array is :"<<scnmax;

}