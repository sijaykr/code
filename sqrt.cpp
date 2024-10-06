#include<bits/stdc++.h>
using namespace std;
int sqt(int x){
    int start=1,end=x,mid,ans;
    while(start<=end){
        mid=start +(end-start)/2;
        if(mid*mid==x){
            ans=mid;
            break;

        }
        else if(mid*mid<x){
            ans=mid;
            start=mid+1;

        }
        else
        end=mid-1;

    }
    return ans;
}
int main(){
int num;
cout<<"please enter the value for the num :";
cin>>num;
cout<<"our value is :"<<sqt(num);
}