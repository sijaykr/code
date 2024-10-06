#include<bits/stdc++.h>
using namespace std;
int fact( int n){
        if(n==0)///base case
            return 1;
        
      return  n*fact(n-1);
    }
    int sum(int n){
        if(n==1){//base case
            return 1;
        }
        return n+sum(n-1);

    }
    int power(int num,int n){
        if(n==0){//base case
            return 1;
        }
        return num*power(num,n-1);
    }
    int sqsum(int num){
        if(num==0){//base case
        return 0;
        }
        return (num*num)+sqsum(num-1);
    }
    int cubesum(int n){
        if(n==0){//base case
            return 0;
        }
        return (n*n*n)+cubesum(n-1);
    }
    int fibo(int n){
        if(n<=1){
            return n;
        }
        return fibo(n-1)+fibo(n-2);
    }
    void gcd(int a,int b){
        if(b==0){
            cout<<a;
            return;
        }
        gcd(b,a%b);

    }
    int gcd1(int a,int b){
        if(b==0)
        return a;
        return gcd1(b,a%b);
    }

    
int main(){
int num,two=2;
    
    cout<<"pleasse enter the value for the number : ";
cin>>num;
if(num<0){
    cout<<"factorial is not possible :";
}
cout<<"our factorial is "<<fact(num)<<endl;
cout<<"our sum of n number is "<<sum(num)<<endl;
cout<<"our power of two "<<power(two,num)<<endl;
cout<<"power of 7 is "<<power(7,num)<<endl;
cout<<"our square sum is "<< sqsum(num)<<endl;
cout<<"our cube sum is "<<cubesum(num)<<endl;
cout<<"our fibbonacci sequence is :"<<fibo(num)<<endl;
gcd(12,39);cout<<" ";
cout<<"our gcd is :"<<gcd1(48,18);

}