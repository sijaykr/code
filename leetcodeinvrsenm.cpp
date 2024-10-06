#include<bits/stdc++.h>
using namespace std;
int main(){
    int num,rem,ans=0;
cout<<"please enter the value for the num to be reversed :";
cin>>num;
while(num!=0){
    rem=num%10;
    num=num/10;

    if(ans>INT_MAX/10||ans<INT_MIN/10){
        cout<< ans <<" our ans exid the value of integer ";
    }
    else
      ans=ans*10+rem;
    }
    
cout<<"our reversd value is :"<<ans;
  
}
