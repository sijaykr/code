#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int countdigit(int num){
    int count=0;
    while(num!=0){
        count++;
        num=num/10;
    }
    return count;
}
bool armstrong(int num,int digit){
    int ans=0,rem,x=num;
    while(num!=0){
        rem=num%10;
        num=num/10;
        ans=ans+pow(num,digit);
    }
    if(x==ans){
        return 1;
    }
     
        return  0;
    

}
int main(){
    int n;
    cout<<"please enter the value for the num :";
    cin>>n;
    int digit=countdigit(n);
    cout<<"our calulated digit is :"<<digit<<endl;
    int value=armstrong(n,digit);
    cout<<value<<endl;
    if(value==1){
        cout<<"our given number :"<<n<< "is armstromg :";
        }
    
    else{

        cout<<"our given number :"<< n<< " is not armstrong :";

    }
}