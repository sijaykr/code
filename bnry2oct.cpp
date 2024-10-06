#include<bits/stdc++.h>
using namespace std;
int main(){
    int bnnum,rem,mult=1,ans=0;
    cout<<"please eter the value for the decimal value :";
    cin>>bnnum;
    while (bnnum>0)
    {
        rem=bnnum%10;
        bnnum=bnnum/10;
        ans=mult*rem+ans;
        mult=mult*2;


    }
    cout<<"our value in decimal is :"<<ans<<endl;
    int rem1,ans1=0,mult1=1;
int dcnum=ans;
    while(dcnum>0){
        rem1=dcnum%8;
        dcnum=dcnum/10;
        ans1=mult1*rem1+ans1;
        mult1=10*mult1;

    }
    cout<<"our value for the octa is :"<<ans1;
}