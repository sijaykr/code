#include<bits/stdc++.h>
using namespace std;
void swap1(int a,int b){
    int c;
     c=a,
a=b;
b=c;
}
void swap(int &a,int &b){
    int c;
     c=a;
    a=b;
    b=c;
}
void swap(float a,float b){
    float c;
    c=a;a=b;b=c;

}


int main(){
    int a,b;
    float f1,f2;
    cout<<"please enter the value for the a and b:";
    cin>>a;
cin>>f1>>f2;
    cin>>b;
    swap1(a,b);
    cout<<a<< b<<endl;
    swap(a,b);
    cout<<a<<b;
    swap(f1,f2);
    cout<<f1<<f2;

}