#include<bits/stdc++.h>
using namespace std;
int main(){
    int num;
    cout<<"please enter the value of num for summing the digit :";
    cin>>num;
    while(num>9){
    int ans=0,rem;
    while(num>0){
        rem=num%10;
        num=num/10;
        ans=rem+ans;
    }
num=ans;
    }
    cout<<"our sum of digit of given number is single digit is :"<<num;
}

