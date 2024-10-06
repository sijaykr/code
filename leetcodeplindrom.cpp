#include<bits/stdc++.h>
using namespace std;
int main(){
    int num,rem,x,ans=0;
    
    cout<<"please enter the value of number in term of X :";
    cin>>x;
    num=x;

    while(num!=0){
        rem=num%10;
        num=num/10;
        ans=10*ans+rem;

    }
    cout<<"our ans is "<<ans<<endl;
    if(x==ans)
        cout<<"yes "<< x <<" is palindrome :"; 
    
    else
    cout<<"given number is not pallindrome ";
}