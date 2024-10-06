#include<bits/stdc++.h>
using namespace std;
void swap(int p1,int p2){
    int temp=p1;
    p1=p2;
    p2=temp;
    cout<<"swapeed value is  ";
    cout<<p1<<" "<<p2<<endl;
    
}
void realswap(int *t1,int *t2){
    int temp=*t1;
    *t1=*t2;
    *t2=temp;
    cout<< "value by the swaping from function"<<endl;
    cout<<*t1<<" "<<*t2<<endl;
    cout<<t1<<" " <<t2<<endl;
    cout<<&t1<<" "<<&t2<<endl;

}
int main(){
    int a=10;
    int b=20;
    swap(a,b);
    cout<<a<<" "<<b<<endl;
    realswap(&a,&b);
    cout<<endl;
    cout<<a<<" "<<b;
    cout<<&a<<" "<<&b;

}