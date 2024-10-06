#include<bits/stdc++.h>
using namespace std;
int main(){
    int octnum,rem,mult=1,ans=0;
    cout<<"please enter the value for the octa value :";
    cin>>octnum;
    while(octnum>0){
        rem=octnum%10;
        octnum=octnum/10;
        ans=rem*mult+ans;
        mult=mult*8;
    }
    cout<<"our value in decimal for given octa value is "<<ans<<endl;
    int mult1=1,ans1=0;;
    while(ans>0){
        rem=ans%2;
        ans=ans/2;
        ans1=mult1*rem +ans1;
        mult1=10*mult1;

    }
    cout<<"our final value in form of decimal is :"<<ans1;
}