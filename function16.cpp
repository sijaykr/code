#include<iostream>
using namespace std;
bool prime(int x){
    if(x<2)
        return 0;
        for(int i=2;i<x;i++){
            if(x%i==0)
            return 0;
        }
        return 1;
}
int fact(int x){
    int ans=1;
    for(int i=1;i<=x;i++){
        ans=ans*i;
    }
    return ans;
}
int sum(int x,int y){
      int ans=x+y;
      return ans;
}
void fun(){
    cout<<" hello dada how r u :";
}
int main(){
    int a,b;
    cout<<"please enter the value for the a and b:";
    cin>>a>>b;
    cout<<"our answer is :"<<endl;
cout<<prime(a)<<endl;
cout<<prime(b)<<endl;
cout<<prime(a+b)<<endl;
cout<<fact(a)<<endl;
cout<<fact(b)<<endl;
cout<<fact(a+b)<<endl;
cout<<fact(a-b)<<endl;
cout<<sum(a,b)<<endl;
fun();
}