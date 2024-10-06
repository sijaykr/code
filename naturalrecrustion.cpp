#include<bits/stdc++.h>
using namespace std;
void print(int num,int n){
    if(num==n){
        cout<<num<<endl;
        return;
    }
    cout<<num<<endl;
    print(num+1,n);
}
void print2(int n){
    if(n==1){
        cout<<n;
        return;
    }
    cout<<n<<endl;
    print2(n-1);
}
void even(int num,int n){
    if(num>n){
        return;
    }
    cout<<num<<" ";
    even(num+2,n);
}
int main(){
    int N;
    cout<<"please enter the value from that you want  to print :";
    cin>>N;
    print(1,N);
    cout<< "by using function 2 "<<endl;
    print2(N);
    cout<<"our list of even number is :"<<endl;
    even(0,10);

}