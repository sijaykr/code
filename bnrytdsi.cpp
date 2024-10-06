#include<bits/stdc++.h>
using namespace std;
int main(){
    int bnnum,ans=0,rem,mult=1;
    cout<<"please enter the value in decimal :";
    cin>>bnnum;
    while(bnnum>0){
        //unit element ko nikala he
        rem=bnnum%10;
        // binary value ko update krke new value me laya he 
        bnnum=bnnum/10;
        //answer update krte rhn he 
        ans=rem*mult+ans;
        // 2 ko update kiye he 

        mult=mult*2;
    }
    cout<<"our answer in decimal is :"<<ans;
}