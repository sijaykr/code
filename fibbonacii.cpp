#include<bits/stdc++.h>
using namespace std;
int main(){
    int num,first=0,second= 1,next;

    cout<<"please enter the value of num ::";
    cin>>num;
    cout<<first<<" "<<second<<" ";
    for(int i=0;i<=num;i++){
        
        //cout<<first<<" ";
        next=first+second;
        first=second;
        second=next;
cout<<next<<" ";
    }
}
