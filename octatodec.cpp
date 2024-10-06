#include<bits/stdc++.h>
using namespace std;
int main(){
    int num,ans=0,rem,mult=1;
    cout<<"please enter the value of octa : " ;
    cin>>num;
    while(num>0){
        rem=num%10;
        num=num/10;
        ans=rem*mult+ans;
        mult=8*mult;
    }
    cout<<"our value for the given octa is :"<<ans;
}