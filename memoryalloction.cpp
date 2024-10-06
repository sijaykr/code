#include<bits/stdc++.h>
using namespace std;
int main(){
int *p1=new int;
*p1=5;
cout<<*p1<<endl;
char *p2=new char;
*p2='a';
cout<<*p2<<endl;
float *p3=new float;
*p3=4.6;
cout<<*p3<<endl;
int n;
cout<<"please enter the value for the num n:";
cin>>n;
int *p4=new int[n];
for(int i=0;i<n;i++){
    p4[i]=i+1;
}
for(int i=0;i<n;i++){
    cout<<p4[i]<<" ";
}

delete p1;
delete p2;
delete p3;
delete []p4;

}