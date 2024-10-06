#include<bits/stdc++.h>
using namespace std;
int main(){
    int num,rem,ans=0,mult=1;
    cout<<"please enter the value for the number :";
    cin>>num;
    while(num>0){
        rem=num%8;
        num=num/10;
        ans=mult*rem+ans;
        mult=mult*10;
    }
    cout<<"our answer in octa  for the given decimal value is :"<<ans;
}