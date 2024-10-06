#include<bits/stdc++.h>
using namespace std;
int main(){
    int x;
    cout<<"please enter th value for the year to be checked leap year or not :";
    cin>>x;
    if(x%400==0){
        cout<<x <<" is leap year :"<<endl;
    }
    else if(x%4==0&&x%100!=0){
        cout<<x <<" is leap year ";
    }
    else{
        cout<<x<<" is not a leap year ";
    }
}