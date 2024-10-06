#include<bits/stdc++.h>
using namespace std;
int trailzerofct(int x){
    int count=0;
    while(x>=5){
        count=x/5+count;
        x=x/5;
 }
 return count;
}

int fact(int x){
    int ans=1;
    for(int i=1;i<=x;i++){
        ans=ans*i;
    }
    return ans;
}
int main(){
    int n;
    cout<<"please enter the value for the num :";
    cin>>n;
    cout<<"our factorial for given value is :"<<fact(n)<<endl;
    cout<<"value of trailing zero following by given numbers factorial : "<< trailzerofct(n);

}