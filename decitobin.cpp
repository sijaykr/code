#include<bits/stdc++.h>
using namespace std;
int main(){
    int num,rem,mult=1,ans=0;
    cout<<"please enter the value for the num :";
    cin>>num;
    while(num>0){
        rem=num%2;
        num=num/2;
        ans=rem*mult +ans;
        mult=mult*10;
    }
    cout<<"our decimal value for   given value is "<<ans;
}