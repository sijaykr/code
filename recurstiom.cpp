#include<bits/stdc++.h>
using namespace std;
void print(int n){
    if(n==1){
        cout<<n<<endl;
        return;
    }
    cout<<n<<endl;
    print(n-1);
}
void fun3(int n){
    if(n==0){
    cout<<"happy bairthday:";
    return;
    }
    cout<< n <<" days are remaing in the birthday :"<<endl;
    
    fun3(n-1);
}
int main(){
    int n;
    cout<<"please enter the value for the num :";
cin>>n;

//for(int i=n;i>=0;i--){
  //  cout<<"happy birthday and "<<i<< " days are remaing in the birthday :";
    //cout<<endl;
//}

fun3(n);
cout<<endl;
cout<<" our printed number is :";
print(n);
}